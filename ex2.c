//02)
//First child: sleeps for 2 seconds .exits with status 2.
//second child : sleeps for 1 seconds .exits with status 1.
//parent :waits twice ,and prints which child (by PID or exit code finished first and second )

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child1, child2;
    int status1, status2;

    printf("Parent process started. PID: %d\n", getpid());

    child1 = fork(); // First child process
    if (child1 == 0) {
        printf("First child started. PID: %d\n", getpid());
        sleep(2);
        printf("First child exiting with status 2.\n");
        exit(2);
    }

    child2 = fork(); // Second child process
    if (child2 == 0) {
        printf("Second child started. PID: %d\n", getpid());
        sleep(1);
        printf("Second child exiting with status 1.\n");
        exit(1);
    }

    // Parent waits for both children
    pid_t finishedChild1 = wait(&status1);
    pid_t finishedChild2 = wait(&status2);

    printf("Parent: First finished child PID: %d, Exit status: %d\n", finishedChild1, WEXITSTATUS(status1));
    printf("Parent: Second finished child PID: %d, Exit status: %d\n", finishedChild2, WEXITSTATUS(status2));

    printf("Parent: Both children have finished.\n");

    return 0;
}













