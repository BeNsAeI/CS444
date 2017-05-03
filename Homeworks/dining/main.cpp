#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#include <sys/time.h>
#include <ctime>
#include <time.h>

#include "color.h"

#define NUM_THREADS 4

using std::cin;
using std::cout;
using std::endl;
using std::string;

class FileIO{
public:
	void get(char *data);
	void set(char *data);
};

void FileIO::get(char * data)
{
	FILE *fp;
	fp=fopen("tmp.dat", "r");
	fscanf(fp, "%s", data);
	fclose(fp);
}
void FileIO::set(char * data)
{
	FILE *fp;
	fp=fopen("tmp.dat", "w");
	fprintf(fp, "%s",data);
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
	char backup[NUM_THREADS];
	for(int i = 0; i < NUM_THREADS; i++)
		backup[i] = '1';
	char data[NUM_THREADS];
	myfile.get(data);
	bool left_fork = 0;
	bool right_fork = 0;
	srand(time(NULL));
	has_left_fork = false;
	has_right_fork = false;
	//cout << "*->" << P << ": " << "LFI: " << left_fork_index << ", RFI: " << right_fork_index << endl;
	while(true)
	{
		myfile.get(data);
		for(int i = 0; i < 4; i++)
		{
			if (data[i] != '0' && data[i] != '1')
			{
				data[left_fork_index] = backup[left_fork_index];
				data[right_fork_index] = backup[right_fork_index];
				myfile.set(data);
			}
			else
			{
				backup[i] = data[i];
			}
		}
		left_fork = (data[left_fork_index] == '1');
		right_fork = (data[right_fork_index] == '1');

		if(has_left_fork && has_right_fork)
		{
			data[right_fork_index]='0';
			data[left_fork_index]='0';
			myfile.set(data);
			myfile.get(data);
			left_fork = (data[left_fork_index] == '1');
			right_fork = (data[right_fork_index] == '1');
			this->think = false;
			this->eat = true;
			if(!timer_is_set)
			{
				myTimer.Start();
				timer_is_set = true;
				printf("\t- Philosopher %d got his "ANSI_COLOR_YELLOW"is dining.\n" ANSI_COLOR_RESET,P);
				printf("Forks of %d -> left = %d, right = %d.\n",P,has_left_fork,has_right_fork);
			}
			myTimer.Stop();
			if(myTimer.Time() > rand() %7 + 2)
			{
				printf("\t- Philosopher %d got his "ANSI_COLOR_RED"is done dining.\n"ANSI_COLOR_RESET,P);
				put_fork();
				data[right_fork_index]='1';
				data[left_fork_index]='1';
				has_left_fork=false;
				has_right_fork=false;
				myfile.set(data);
				myfile.get(data);
				left_fork = (data[left_fork_index] == '1');
				right_fork = (data[right_fork_index] == '1');
				timer_is_set = false;
				this->think = true;
				this->eat = false;
				sleep(rand() %19 + 1);
				printf("Forks of %d -> left = %d, right = %d.\n",P,has_left_fork,has_right_fork);
				//return true;
			}
		}
		if(!has_left_fork && !has_right_fork)
		{
			if(left_fork)
			{
				get_left_fork();
				has_left_fork=true;
				data[left_fork_index]='0';
				myfile.set(data);
				myfile.get(data);
				left_fork = (data[left_fork_index] == '1');
				right_fork = (data[right_fork_index] == '1');
				printf("\t- Philosopher %d got his "ANSI_COLOR_YELLOW"left"ANSI_COLOR_RESET" fork!\n",P);
				printf("Forks of %d -> left = %d, right = %d.\n",P,has_left_fork,has_right_fork);
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
				has_right_fork=true;
				data[right_fork_index] = '0';
				myfile.set(data);
				myfile.get(data);
				left_fork = (data[left_fork_index] == '1');
				right_fork = (data[right_fork_index] == '1');
				printf("\t- Philosopher %d got his "ANSI_COLOR_YELLOW"right"ANSI_COLOR_RESET" fork!\n",P);
				printf("Forks of %d -> left = %d, right = %d.\n",P,has_left_fork,has_right_fork);
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
	int numP = NUM_THREADS;//omp_get_max_threads();
	int numF = numP;
	cout << "Number of available threads is " << NUM_THREADS/*omp_get_max_threads()*/ << "." << endl;
	omp_set_num_threads(NUM_THREADS/*omp_get_max_threads()*/);
	cout << "setting up the forks..." << endl;
	Philosopher myPhilosopher[numP];
	FileIO myfile;
	char * backup = "1111";
	char * data = "1111";
	myfile.set(data);
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
