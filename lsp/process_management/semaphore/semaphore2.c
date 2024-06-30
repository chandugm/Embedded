#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

sem_t bin_sem;
sem_t empty, full; // Separate initialization

char buff[5];

void *producer_thread(void *arg);
void *consumer_thread(void *arg);
int res;
int main()
{
	res=sem_init(&bin_sem, 0, 1);
	if(res!=0)
	{
		perror("semaphore init failed");
		exit(EXIT_FAILURE);
	}
	sem_init(&empty, 0, 5); // Initialize empty slots
	if(res!=0)
	{
		perror("semaphore init failed");
		exit(EXIT_FAILURE);
	}
	sem_init(&full, 0, 0);  // Initialize full slots
	if(res!=0)
	{
		perror("semaphore init failed");
		exit(EXIT_FAILURE);
	}

	pthread_t producer, consumer;
	pthread_create(&producer, NULL, producer_thread, NULL);
	if(res!=0)
	{
		perror("thread create failed");
		exit(EXIT_FAILURE);
	}
	pthread_create(&consumer, NULL, consumer_thread, NULL);
	if(res!=0)
	{
		perror("thread create failed");
		exit(EXIT_FAILURE);
	}

	pthread_join(producer, NULL);
	if(res!=0)
	{
		perror("thread create failed");
		exit(EXIT_FAILURE);
	}
	pthread_join(consumer, NULL);
	if(res!=0)
	{
		perror("thrad create failed");
		exit(EXIT_FAILURE);
	}

	printf("Thread completed\n");
	return 0;
}

void *producer_thread(void *arg)
{
	int i=65;
	int in = 0;
	while (1)
	{
		sem_wait(&empty);
		buff[in] = i;
		printf("Producer sent %c\n",buff[in]);
		in = (in + 1) % 5; // Correct buffer index calculation
		sem_post(&full);
		i+=1;//printf alphabhates
		if(i>90)
			i=65;

	}
	return NULL;
}

void *consumer_thread(void *arg)
{
	int out = 0;
	char temp[10];
	while (1)
	{
		sem_wait(&full);
		temp[out] = buff[out];
		printf("Consumer catched %c\n",temp[out]);
		out = (out + 1) % 5; // Correct buffer index calculation
		sem_post(&empty);

	}
	return NULL;
}

