#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <signal.h>

void *producer_function(void *arg);
void *consumer_function(void *arg);

int counter = 0;
char buffer[5];

pthread_t producer_id, consumer_id;

int main() {
int res;
    pthread_t producer_thread, consumer_thread;

    res = pthread_create(&producer_thread, NULL, producer_function, NULL);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }

    res = pthread_create(&consumer_thread, NULL, consumer_function, NULL);
    if (res != 0) {
        perror("Thread creation failed");
        exit(EXIT_FAILURE);
    }

    res = pthread_join(producer_thread, NULL);
    if (res != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }

    res = pthread_join(consumer_thread, NULL);
    if (res != 0) {
        perror("Thread join failed");
        exit(EXIT_FAILURE);
    }

    printf("Threads completed\n");
    return 0;

}

void *producer_function(void *arg) 
{
    producer_id = pthread_self();
    int in = 0;

    
        while (counter == 5)
            {

        buffer[in] = 'A';
        in = (in + 1) % sizeof(buffer);
        counter++;

        printf("producer\n");
        pthread_kill(consumer_id, SIGUSR2); // Signal consumer
        pause();
    }
}

void *consumer_function(void *arg) {
    consumer_id = pthread_self();
    int out = 0;

    while (counter==0) {
        
            

        // Consume item (you can modify this part as needed)
        printf("Consumed: %c\n", buffer[out]);

        out = (out + 1) % sizeof(buffer);
        counter--;

        printf("consumer\n");
        pthread_kill(producer_id, SIGUSR1); // Signal producer
        pause();
    }
}

