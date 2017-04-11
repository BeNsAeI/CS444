#include <iostream>
#include <omp.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <sys/time.h>

using std::cin;
using std::cout;
using std::endl;

class Timer{
public:
	void Start(){gettimeofday(&startTime,NULL);}
	void Stop(){gettimeofday(&endTime,NULL);}
	double Time(){return (((endTime.tv_sec - startTime.tv_sec) * 1000000u + endTime.tv_usec - startTime.tv_usec) / 1.e6);}
private:
	struct timeval startTime;
	struct timeval endTime;
};

void checkOMP()
{
	#ifndef _OPENMP
		fprintf(stderr, "OpenMP is not suppoerted!\n");
		exit(-1);
	#endif
	cout << "OpenMP is ready!" << endl;
}

int main(int argc, char ** argv)
{
	checkOMP();
	cout << "Hello OpenMP" << endl;
	cout << "Number of available threads is " << omp_get_max_threads() << "." << endl;
	omp_set_num_threads(omp_get_max_threads());
	cout << "Number of used threads is " << omp_get_num_threads() << "." << endl << endl;
	int stress = 10;
	int second = 420000000;
	cout << "Performing stress test of size " << (double)((double)stress*(double)second) << " samples." << endl;
	cout << "Creating the timer." << endl<< endl;
	Timer myTimer;
	cout << "Single thread started" << endl;
	myTimer.Start();
	for(int i = 0; i < stress; i++)
	{
		for(int j = 0; j < second; j++);
		int thread = omp_get_thread_num();
		printf("%d -> %d\n",thread,i);
	}
	myTimer.Stop();
	cout << "Single thread ended in " << myTimer.Time() << " seconds." << endl;
	cout << "Multi thread (Out of Order) started" << endl;
	myTimer.Start();
	#pragma omp parallel for
		for(int i = 0; i < stress; i++)
		{
			for(int j = 0; j < second; j++);
			int thread = omp_get_thread_num();
			printf("%d -> %d\n",thread,i);
		}
	myTimer.Stop();
	cout << "Multi thread ended in " << myTimer.Time() << " seconds." << endl;
	cout << "Multi thread (In Order) started" << endl;
	myTimer.Start();
	#pragma omp parallel for
		for(int i = 0; i < stress; i++)
		{
			for(int j = 0; j < second; j++);
			int thread = omp_get_thread_num();
			printf("%d -> %d\n",thread,i);
		}
	myTimer.Stop();
	cout << "Multi thread ended in " << myTimer.Time() << " seconds." << endl;

	return 0;
}
