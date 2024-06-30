#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 7891
#define BUFFER_SIZE 1024

int serverSocket, newSocket;
struct sockaddr_in serverAddr, clientAddr;
socklen_t addr_size;
char buffer[BUFFER_SIZE];

void* receiveMessages(void* arg)
{
	int nBytes;
	while(1)
	{
		nBytes = recv(newSocket, buffer, BUFFER_SIZE, 0);
		buffer[nBytes] = '\0';  // Null-terminate the received string
		printf("recived from client: %s",buffer);
	}
	return NULL;
}

void* sendMessages(void* arg)
{
	int nBytes;
	while(1)
	{
		printf("Type a sentence to send to server:\n");
		fgets(buffer, BUFFER_SIZE, stdin);
		nBytes = strlen(buffer) + 1;
		send(newSocket, buffer, nBytes, 0);
	}
	return NULL;
}

int main()
{
	pthread_t sendThread, receiveThread;

	/* Create TCP socket */
	serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	if (serverSocket < 0)
	{
		perror("Socket creation failed");
		exit(1);
	}

	/* Configure settings in address struct */
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(PORT);
	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

	/* Bind socket with address struct */
	if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0)
	{
		perror("Bind failed");
		exit(1);
	}

	/* Listen on the socket, with a max connection queue of 5 */
	if (listen(serverSocket, 5) < 0)
	{
		perror("Listen failed");
		exit(1);
	}

	/* Accept call creates a new socket for the incoming connection */
	addr_size = sizeof clientAddr;
	newSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &addr_size);
	if (newSocket < 0)
	{
		perror("Accept failed");
		exit(1);
	}

	/* Create threads for sending and receiving messages */
	pthread_create(&receiveThread, NULL, receiveMessages, NULL);
	pthread_create(&sendThread, NULL, sendMessages, NULL);

	/* Join threads */
	pthread_join(receiveThread, NULL);
	pthread_join(sendThread, NULL);

	close(newSocket);
	close(serverSocket);

	return 0;
}
