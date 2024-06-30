#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

// Custom signal handler for SIGINT
void fun(int sig) {
    printf("FUN! I got signal %d\n", sig);
    // Reset the SIGINT handler to the default action
//    (void) signal(SIGINT, SIG_DFL);
}

int main() {
    // Set up the custom signal handler for SIGINT
    (void) signal(SIGINT, fun);

    // Infinite loop
    while (1) {
        printf("Hello world\n");
        sleep(2);  // Sleep for 2 seconds
    }

    return 0;  // Although this line is never reached, it's good practice to include it
}

