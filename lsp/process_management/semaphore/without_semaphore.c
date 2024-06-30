#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *producer_function(void *arg);
void *consumer_function(void *arg);
int counter=0;
char buffer[5];

int main() 
{
	int res;
	pthread_t producer_thread,consumer_thread;
	void *thread_result;
	res = pthread_create(&producer_thread, NULL, producer_function, (void *)NULL);
	if (res != 0) 
	{
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	res = pthread_create(&consumer_thread, NULL, consumer_function, (void *)NULL);
	if (res != 0) {
		perror("Thread creation failed");
		exit(EXIT_FAILURE);
	}
	res = pthread_join(producer_thread, &thread_result);
	if (res != 0) 
	{
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	res = pthread_join(consumer_thread, &thread_result);
	if (res != 0) 
	{
		perror("Thread join failed");
		exit(EXIT_FAILURE);
	}
	printf("thread completed\n");
}

void *producer_function(void *arg)
{
	printf("\n");
	int in=0; 
	while(1)
	{
		while(counter == 5);
		buffer[in] = 'A';
		in = (in+1)%sizeof(buffer);
		counter++;
		printf("producer\n");
	}
}

void *consumer_function(void *arg)
{
	printf("\n");
	int out=0; char temp[10];
	while(1)
	{
		while(counter == 0);
		temp[out] = buffer[out];
		out = (out+1)%sizeof(buffer);
		counter--;
		printf("consumer");
	}
}
