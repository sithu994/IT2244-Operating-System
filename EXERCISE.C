 //UNIX standard functions (pipe, write, read,
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define MSGSIZE 16 // Defines a constant MSGSIZE, which sets the message size to 16 bytes.

char* msg1 = "hello,world #1";
char* msg2 = "hello,world #2";
char* msg3 = "hello,world #3";

int main() {
    char inbuf[MSGSIZE]; // Buffer for reading messages
    int p[2], pid, nbytes; // p[2]: Array to store file descriptors for the pipe (p[0] for reading, p[1] for writing)

    if (pipe(p) < 0) {
        exit(1);
    }

    /* write pipe */
    if ((pid = fork()) > 0) { // Fix: added missing ')'
        write(p[1], msg1, MSGSIZE);
        write(p[1], msg2, MSGSIZE);
        write(p[1], msg3, MSGSIZE);

        close(p[1]); // Fix: Closing the write-end of the pipe
        wait(NULL);
    } else { // Child process reads from pipe
        close(p[1]); // Close the write-end in the child

        while ((nbytes = read(p[0], inbuf, MSGSIZE)) > 0) {
            printf("%s\n", inbuf);
        }

        if (nbytes != 0) {
            exit(2);
        }

        printf("Finished reading\n"); // Fix: Changed 'print' to 'printf'
        close(p[0]); // Close the read-end of the pipe
    }

    return 0;
}
