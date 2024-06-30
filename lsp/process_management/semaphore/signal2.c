#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>

char buffer[26];
int in = 0;
int out = 0;
int count = 0;

pthread_t producer_tid;
pthread_t consumer_tid;

void producer_sig(int sig);
void consumer_sig(int sig);

void *producer(void *arg) {
	signal(SIGUSR1, producer_sig); // Initialize producer signal handler
	while (1) { // Waiting for a signal from consumer thread inside infinite loop
		pause();
	}
}

void *consumer(void *arg) {
	signal(SIGUSR2, consumer_sig); // Initialize consumer signal handler
	pthread_kill(producer_tid, SIGUSR1); // Consumer raises a signal to producer thread
	while (1) { // Waiting for a signal from producer thread inside infinite loop
		pause();
	}
}

void producer_sig(int sig) {
	printf("Producer: ");
	while (count < 26) {
		buffer[in] = count + 65; // Fill buffer with A to Z
		printf("%c", buffer[in]);
		in = (in + 1) % 26;
		count++;
	}
	printf("\n");
	pthread_kill(consumer_tid, SIGUSR2); // Signal consumer thread when buffer is full
}

void consumer_sig(int sig) {
	printf("\tConsumer: ");
	while (count > 0) {
		printf("%c", buffer[out]);
		buffer[out] = 0; // Clear the buffer
		out = (out + 1) % 26;
		count--;
	}
	printf("\n");
	pthread_kill(producer_tid, SIGUSR1); // Signal producer thread when buffer is empty
}

int main() {
	pthread_create(&producer_tid, NULL, producer, NULL);
	pthread_create(&consumer_tid, NULL, consumer, NULL);
	pthread_join(producer_tid, NULL);
	pthread_join(consumer_tid, NULL);
	return 0;
}

