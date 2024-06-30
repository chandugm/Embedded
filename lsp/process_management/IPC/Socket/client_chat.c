#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 7891
#define BUFFER_SIZE 1024

int clientSocket_fd;
struct sockaddr_in serverAddr;
char buffer[BUFFER_SIZE];

void* receiveMessages(void* arg)
{
    int nBytes;
    while(1)
{
        nBytes = recv(clientSocket_fd, buffer, BUFFER_SIZE, 0);
        buffer[nBytes] = '\0';  // Null-terminate the received string
 printf("Received from server: %s\n",buffer);
    }
    return NULL;
}

void* sendMessages(void* arg)
{
    int nBytes;
    while(1)
{
printf("Type a sentence to send to client:\n");        
        fgets(buffer, BUFFER_SIZE, stdin);
        nBytes = strlen(buffer) + 1;
        send(clientSocket_fd, buffer, nBytes, 0);
    }
    return NULL;
}

int main() {
    pthread_t sendThread, receiveThread;

    /* Create TCP socket */
    clientSocket_fd= socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket < 0) {
        perror("Socket creation failed");
        exit(1);
    }

    /* Configure settings in address struct */
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

    /* Connect to the server */
    if (connect(clientSocket_fd, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("Connect failed");
        exit(1);
    }

    /* Create threads for sending and receiving messages */
    pthread_create(&receiveThread, NULL, receiveMessages, NULL);
    pthread_create(&sendThread, NULL, sendMessages, NULL);

    /* Join threads */
    pthread_join(receiveThread, NULL);
    pthread_join(sendThread, NULL);

    close(clientSocket);

    return 0;
}

