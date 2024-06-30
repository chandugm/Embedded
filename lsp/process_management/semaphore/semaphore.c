#include<fcntl.h>
#include<sys/stat.h>
#include<stdio.h>
#include <semaphore.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
sem_t bin_sem;
int res;
sem_t empty={5},full={0};

char buff[5];
void *producer_thread(void *arg);
void *consumer_thread(void *arg);
pthread_t producer,consumer;
int main()
{
	/* The second argument (0) indicates that the semaphore is shared between threads of the same process. The third argument (1) initializes the semaphore with a value of 1, making it a binary semaphore (like a mutex).
	 */
	res=sem_init(&bin_sem,0,1);//[0]address of semaphore variable,no of threads or processes if three processes valuen is 3,intial value
	if(res!=0)
	{
		perror("Semaphore initialization failed");
		exit(EXIT_FAILURE);
	}
	res=pthread_create(&producer,NULL,producer_thread,NULL);
	if(res!=0)
	{
		perror("thread creation failed");
		exit(EXIT_FAILURE);
	}
	res=pthread_create(&consumer,NULL,consumer_thread,NULL);
	if(res!=0)
	{
		perror("thread creation failed");
		exit(EXIT_FAILURE);
	}
	res=pthread_join(producer,NULL);

	if(res!=0)
	{
		perror("thread join failed");
		exit(EXIT_FAILURE);
	}
	res=pthread_join(consumer,NULL);

	if(res!=0)
	{
		perror("thread join failed");
		exit(EXIT_FAILURE);
	}
printf("Thread completed\n");

}
void *producer_thread(void *arg)
{
	
	int in=0;
	while(1)
	{
		sem_wait(&empty);
		buff[in]='A';
		in=(in+1)%sizeof(buff);
		sem_post(&full);
		printf("producer\n");
	}
	
}
void *consumer_thread(void *arg)
{	
	int out=0;char temp[10];
	while(1)
	{
		sem_wait(&full);
		temp[out]=buff[out];
		out=(out+1)%sizeof(buff);
		sem_post(&empty);
		printf("Consumer\n");
	}

}
