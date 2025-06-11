/*Ex

1)read the two input from user (//parent process)
name:
reg no:
age:

2)print the output from the child(//child process)
name:abc
reg no: 2022/ict/01
age:25
*/

#include <stdio.h>  // Standard input/output functions
#include <stdlib.h> // General utilities (exit, memory allocation, etc.)
#include <unistd.h> // UNIX standard functions (pipe, write, read)
#include <string.h> // String handling functions

#define MSGSIZE 100 // Increased message size for better input handling

int main(){
    int p[2];
    pid_t pid;
    char input_buffer[MSGSIZE];

    // Create pipe
    if (pipe(p) < 0) {
        perror("Pipe creation failed");
        exit(1);
    }

    // Fork a child process
    pid = fork();

    if (pid < 0) { // Error handling for fork
        perror("Fork failed");
        exit(1);
    } 
    else if (pid > 0) { // Parent Process
        close(p[0]); // Close read end of pipe

        // Get input from user
        printf("Enter Name: ");
        fgets(input_buffer, sizeof(input_buffer), stdin);
        strtok(input_buffer, "\n"); // Remove newline character

        printf("Enter Reg No: ");
        fgets(input_buffer + strlen(input_buffer), sizeof(input_buffer) - strlen(input_buffer), stdin);
        strtok(input_buffer + strlen(input_buffer), "\n");

        printf("Enter Age: ");
        fgets(input_buffer + strlen(input_buffer), sizeof(input_buffer) - strlen(input_buffer), stdin);
        strtok(input_buffer + strlen(input_buffer), "\n");

        // Write data into pipe
        write(p[1], input_buffer, MSGSIZE);
        close(p[1]); // Close write end of pipe
    } 
    else { // Child Process
        char output_buffer[MSGSIZE];

        close(p[1]); // Close write end of pipe

        // Read data from pipe
        read(p[0], output_buffer, MSGSIZE);
        close(p[0]); // Close read end of pipe

        // Print received data
        printf("\nChild Process Output:\n%s\n", output_buffer);
    }

    return 0;
}


//02

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MSGSIZE 100

int main() {
    int p[2]; 
    pid_t pid;
    char output_buffer[MSGSIZE]; // Buffer to store received data

    if (pipe(p) < 0) {
        perror("Pipe creation failed");
        exit(1);
    }

    pid = fork();

    if (pid == 0) { // Child Process
        close(p[1]); // Close write end of pipe

        read(p[0], output_buffer, MSGSIZE); // Read data from pipe
        close(p[0]); // Close read end

        printf("\nChild Process Output:\n%s\n", output_buffer);
    }

    return 0;
}

//all

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h>

#define MSGSIZE 100 // Message size to store multiple inputs

int main(){
    int p[2]; // Pipe file descriptors
    pid_t pid;
    char input_buffer[MSGSIZE];
    char output_buffer[MSGSIZE];

    // Create the pipe
    if (pipe(p) < 0) {
        perror("Pipe creation failed");
        exit(1);
    }

    // Fork a child process
    pid = fork();

    if (pid < 0) { // Fork failed
        perror("Fork failed");
        exit(1);
    } 
    else if (pid > 0) { // Parent Process
        close(p[0]); // Close read end

        // Get input from user
        printf("Enter Name: ");
        fgets(input_buffer, sizeof(input_buffer), stdin);
        strtok(input_buffer, "\n"); // Remove newline

        printf("Enter Reg No: ");
        fgets(input_buffer + strlen(input_buffer), sizeof(input_buffer) - strlen(input_buffer), stdin);
        strtok(input_buffer + strlen(input_buffer), "\n");

        printf("Enter Age: ");
        fgets(input_buffer + strlen(input_buffer), sizeof(input_buffer) - strlen(input_buffer), stdin);
        strtok(input_buffer + strlen(input_buffer), "\n");

        // Write data to pipe
        write(p[1], input_buffer, MSGSIZE);
        close(p[1]); // Close write end

    } 
    else { // Child Process
        close(p[1]); // Close write end

        // Read data from pipe
        read(p[0], output_buffer, MSGSIZE);
        close(p[0]); // Close read end

        // Print received data
        printf("\nChild Process Output:\n%s\n", output_buffer);
    }

    return 0;
}
