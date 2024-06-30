#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int server_sockfd, client_sockfd;  // File descriptors for server and client sockets
    int server_len, client_len;  // Lengths of server and client address structures
    struct sockaddr_un server_address;  // Server address structure
    struct sockaddr_un client_address;  // Client address structure

    /* Remove any old socket and create an unnamed socket for the server. */
    unlink("abc_socket");  // Remove any existing socket file
    server_sockfd = socket(AF_LOCAL, SOCK_STREAM, 0);  // Create a new socket

    /* Name the socket. */
    server_address.sun_family = AF_UNIX;  // Set the address family to AF_UNIX (local communication)
    strcpy(server_address.sun_path, "abc_socket");  // Set the file system path for the socket
    server_len = sizeof(server_address);  // Calculate the length of the server address structure
    bind(server_sockfd, (struct sockaddr *)&server_address, server_len);  // Bind the socket to the address

    /* Create a connection queue and wait for clients. */
    listen(server_sockfd, 5);  // Listen for incoming connections, with a queue size of 5
    while(1) {  // Enter an infinite loop to handle multiple client connections
        char ch;  // Character to be read from and written to the client

        printf("server waiting\n");  // Print a message indicating that the server is waiting for a connection

        /* Accept a connection. */
        client_len = sizeof(client_address);  // Calculate the length of the client address structure
        client_sockfd = accept(server_sockfd,(struct sockaddr *)&client_address, &client_len);  // Accept a client connection
        sleep(5);  // Simulate processing delay

        /* We can now read/write to client on client_sockfd. */
        read(client_sockfd, &ch, 1);  // Read a single character from the client
        ch++;  // Increment the character
        write(client_sockfd, &ch, 1);  // Write the incremented character back to the client
        close(client_sockfd);  // Close the client socket
    }
}

