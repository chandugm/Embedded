#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_odd(void *arg);
void *thread_even(void *arg);
int main() 
{
	pthread_t odd_thread, even_thread;
	int res;

	// Create thread to print odd numbers
	res = pthread_create(&odd_thread, NULL, thread_odd, NULL);
	if (res != 0) 
{
		perror("Odd thread creation failed");
		exit(EXIT_FAILURE);
	}

	// Create thread to print even numbers
	res = pthread_create(&even_thread, NULL, thread_even, NULL);
	if (res != 0) 
{
		perror("Even thread creation failed");
		exit(EXIT_FAILURE);
	}
	// Wait for threads to finish
	res = pthread_join(odd_thread, NULL);
	if (res != 0) 
{
		perror("Odd thread join failed");
		exit(EXIT_FAILURE);
	}

	res = pthread_join(even_thread, NULL);
	if (res != 0) 
{
		perror("Even thread join failed");
		exit(EXIT_FAILURE);
	}

	printf("\nThreads completed\n");
	exit(EXIT_SUCCESS);
}

void *thread_odd(void *arg) 
{

	
	for (int i = 1; i <= 50; i++) 
	{
		if(i%2!=0)
		{
			printf("odd:%d\n", i);
			
		}
		else
			sleep(1);

	}

		pthread_exit(NULL);
}

void *thread_even(void *arg) 
{

	for (int i = 1; i <= 50; i++) 
	{
		if(i%2==0)
		{
			printf("even:%d\n", i);
		
		}
		else
			sleep(1);
		
	}
		pthread_exit(NULL);
}

