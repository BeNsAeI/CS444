#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#include <sys/time.h>
#include <ctime>

#include "color.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class FileIO{
public:
	void get(char ** data);
	void set(char ** data);
};

void FileIO::get(char ** data)
{
	char buff[4];
	FILE *fp;
	fp=fopen("tmp.dat", "r");
	fscanf(fp, "%s", buff);
	*data = buff;
	fclose(fp);
}
void FileIO::set(char ** data)
{
	FILE *fp;
	fp=fopen("tmp.dat", "w");
	fprintf(fp, "%s",*data);
	fclose(fp);
}

class Timer{
public:
	void Start(){gettimeofday(&startTime,NULL);}
	void Stop(){gettimeofday(&endTime,NULL);}
	double Time(){return (double)(((endTime.tv_sec - startTime.tv_sec) * 1000000u + endTime.tv_usec - startTime.tv_usec) / 1.e6);}
private:
        struct timeval startTime;
        struct timeval endTime;
};

class Philosopher{
public:
	bool think;
	void get_left_fork(){has_left_fork=true;};
	bool has_left_fork;
	void get_right_fork(){has_right_fork=true;};
	bool has_right_fork;
	bool eat;
	void put_fork(){has_left_fork=false; has_right_fork=false;};
	bool dine(int left_fork_index, int right_fork_index, int P);
};

bool Philosopher::dine(int left_fork_index, int right_fork_index, int P)
{
	Timer myTimer;
	myTimer.Start();
	myTimer.Stop();
	while(myTimer.Time() * 1000 < P)
		myTimer.Stop();
	FileIO myfile;
	bool timer_is_set = false;
	char * data = "0000";
	bool left_fork, right_fork;
	while(true)
	{
		myfile.get(&data);
		if(data[left_fork_index] == '1')
			left_fork = true;
		if(data[right_fork_index] == '1')
			right_fork = true;
		if(has_left_fork && has_right_fork)
		{
			this->think = false;
			this->eat = true;
			if(!timer_is_set)
			{
				myTimer.Start();
				timer_is_set = true;
				printf("\t- Philosopher %d got his "ANSI_COLOR_YELLOW"is dining.\n" ANSI_COLOR_RESET,P);
			}
			myTimer.Stop();
			if(myTimer.Time() > 2)
			{
				printf("\t- Philosopher %d got his "ANSI_COLOR_RED"is done dining.\n"ANSI_COLOR_RESET,P);
				put_fork();
				data[right_fork_index]='1';
				data[left_fork_index]='1';
				myfile.set(&data);
				return true;
			}
		}
		if(!has_left_fork && !has_right_fork)
		{
			if(left_fork)
			{
				get_left_fork();
				data[left_fork_index];
				myfile.set(&data);
				printf("\t- Philosopher %d got his "ANSI_COLOR_YELLOW"left"ANSI_COLOR_RESET" fork!\n",P);
			}
			else
			{
				think = true;
				eat = false;
			}
		}
		if(!has_right_fork && has_left_fork)
		{
			if(right_fork)
			{
				get_right_fork();
				data[right_fork_index] = '0';
				myfile.set(&data);
				printf("\t- Philosopher %d got his "ANSI_COLOR_YELLOW"right"ANSI_COLOR_RESET" fork!\n",P);
			}
			else
			{
				think = true;
				eat = false;
			}
		}
	}
}

int main(int argc, char ** argv)
{
	cout << "Dining philosophers problem:" << endl;
	int numP = omp_get_max_threads();
	int numF = numP;
	cout << "Number of available threads is " << omp_get_max_threads() << "." << endl;
	omp_set_num_threads(omp_get_max_threads());
	cout << "setting up the forks..." << endl;
	Philosopher myPhilosopher[numP];
	FileIO myfile;
	char * data = "1111";
	myfile.set(&data);
	for(int i = 0; i < numF; i++)
	{
		myPhilosopher[i].think = true;
		myPhilosopher[i].eat = !myPhilosopher[i].think;
	}

	#pragma omp parallel for schedule(static)
	for(int i = 0; i < numP; i++)
	{
		int thread = omp_get_thread_num();
		printf("%d -> %d with forks: %d and %d\n",thread,i,(i % numF),((i+1) % numF));
		myPhilosopher[i].dine((i % numF), ((i+1) % numF),i);
	}
	return 0;
}
