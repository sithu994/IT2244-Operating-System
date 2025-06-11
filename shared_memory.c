#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <string.h>

int main() {
    size_t size = 4096;
    
    // Create shared memory
    char *shared_mem = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    if (shared_mem == MAP_FAILED) {
        perror("mmap failed");
        exit(1);
    }

    pid_t pid = fork();
    if (pid == 0) {
        // Child writes to shared memory
        strcpy(shared_mem, "Hello from child!");
        printf("Child wrote: %s\n", shared_mem);
        exit(0);
    } 
    else {
        // Parent waits for child to finish
        wait(NULL);
        printf("parent read: %s\n\n\n\n\n\n\n\n\n\n", shared_mem); // Adjust spaces
        munmap(shared_mem, size);
    }

    return 0;
}
