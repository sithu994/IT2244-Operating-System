//first child:slept for 1 second .
// second child: slept for 3 seconds
//parent :Both Children have finished.

#include <stdio.h>
#include <stdlib.h> // for exit
#include <unistd.h> // for sleep
#include <sys/wait.h> // for wait

int main() {
    pid_t child1,child2;
    printf("Parent process started. PID: %d\n", getpid());
    
    child1 = fork();
    if (child1 == 0) {
        printf("Child process. PID: %d, sleeping for 1 seconds...\n", getpid());
        sleep(1);
        printf("Child process exiting.\n");
        exit(0);
    }
    child2 = fork();
    if (child2 == 0) {
        // Child process
        printf("Child process. PID: %d, sleeping for 3 seconds...\n", getpid());
        sleep(3);
        printf("Child process exiting.\n");
        exit(0); // Child exits with status 0
    }
    wait(NULL);
    wait(NULL);
    printf("Parent: Both children have finished.\n");

    return 0;
}