#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_function(void *arg);
int run_now = 1;
char message[] = "Hello World";

int main() 
{
	int res;
	pthread_t a_thread;
	void *thread_result;
	int print_count1 = 0;

	res = pthread_create(&a_thread, NULL, thread_function, (void *)message);
	if (res != 0) 
	{
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}

	while(print_count1++ < 20) 
	{
		if (run_now == 1) 
		{
			printf("1\n");
			run_now = 2;
		}
		else 
		{
			sleep(1);
		}
	}

	printf("\nWaiting for thread to finish...\n");
	// pthread_join:Waits for the created thread to finish its execution. After the thread terminates, it retrieves the exit status.
	res = pthread_join(a_thread, &thread_result);
	if (res != 0) 
	{
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	printf("Thread joined\n");
	exit(EXIT_SUCCESS);
}

void *thread_function(void *arg) 
{
	int print_count2 = 0;
	/*The created thread prints "2" when run_now is 2 and then sets run_now to 1. If run_now is not 2, the thread sleeps for 1 second and checks again.*/
	while(print_count2++ < 20) 
	{
		if (run_now == 2) 
		{
			printf("2\n");
			run_now = 1;
		}
		else 
		{
			sleep(1);
		}
	}

	pthread_exit("Thank you for the cpu time");
	//    sleep(3);
}
/*
   Thread Synchronization: The global variable run_now is used to synchronize the actions of the main thread and the created thread. Only one thread prints at a time:

   The main thread prints "1" when run_now is 1 and sets run_now to 2.
   The created thread prints "2" when run_now is 2 and sets run_now to 1.
   Thread Creation and Joining:

   pthread_create is used to create a new thread.
   pthread_join is used to wait for the thread to finish and to retrieve its exit status.
   Thread Sleep: The sleep statements ensure that each thread waits for the other to complete its printing before proceeding, effectively creating a simple form of cooperative multitasking.

 *******************sleep commented*************************************
 In both cases, removing the sleep call will cause one of the threads to spin in a tight loop, checking the run_now variable continuously without yielding the CPU. This can lead to:

 High CPU usage.
 Poor performance due to busy-waiting.
 Disrupted synchronization between the threads, leading to unpredictable behavior.
 The sleep calls are important to ensure that each thread yields the CPU, allowing the other thread to run and properly synchronize their actions.

 */
