//03)
//The parent creates a child process.
//the child creates grandchild process,
//The grandchild sleeps 2 seconds and exits with status 2.
// child waits for the grandchild ,prints its exit status,then exits status 55.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid, grandchild_pid;
    int grandchild_status;

    printf("Parent process started. PID: %d\n", getpid());

    child_pid = fork(); // Create child process
    if (child_pid == 0) {
        // Child process
        printf("Child process started. PID: %d\n", getpid());

        grandchild_pid = fork(); // Create grandchild process
        if (grandchild_pid == 0) {
            // Grandchild process
            printf("Grandchild process started. PID: %d\n", getpid());
            sleep(2);
            printf("Grandchild exiting with status 2.\n");
            exit(2);
        }

        // Child waits for grandchild to finish
        wait(&grandchild_status);
        if (WIFEXITED(grandchild_status)) {
            printf("Child: Grandchild exited with status %d\n", WEXITSTATUS(grandchild_status));
        }

        printf("Child exiting with status 55.\n");
        exit(55);
    }

    // Parent waits for child to finish
    int child_status;
    wait(&child_status);
    if (WIFEXITED(child_status)) {
        printf("Parent: Child exited with status %d\n", WEXITSTATUS(child_status));
    }

    printf("Parent: Both child and grandchild have finished.\n");

    return 0;
}