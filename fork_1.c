#include <stdio.h>
#include <stdlib.h> // for exit
#include <unistd.h> // for sleep
#include <sys/wait.h> // for wait

// Parent process waits until child process terminates
int main() {
    pid_t pid;
    printf("Parent process started. PID: %d\n", getpid());
    pid = fork(); // Create a new child process

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process
        printf("Child process. PID: %d, sleeping for 2 seconds...\n", getpid());
        sleep(2);
        printf("Child process exiting.\n");
        exit(0); // Child exits with status 0
    } else {
        // Parent process
        int status;
        printf("Parent waiting for child to finish...\n");
        wait(&status); // Wait for child to finish

        if (WIFEXITED(status)) {
            printf("Child exited with status: %d\n", WEXITSTATUS(status));//WIFEXITED(status) returnstrue if child terminated normally.
        } else {
            printf("Child did not exit normally.\n");
            //WIFEXITED(status) gets the actual exit code (0 here)
        }

        printf("Parent process ending.\n");
    }

    return 0;
}
