# IT2244-Operating-System
# Shared Memory Communication in C

This repository contains a simple C program that demonstrates inter-process communication using **shared memory (`mmap`)** and `fork()`.

## Description

The program creates a shared memory region using `mmap()`. A child process writes data to this shared memory, while the parent process reads the data after the child exits. This allows seamless communication between parent and child processes.

## How It Works

1. The program sets up a shared memory segment using `mmap()`.
2. The child process writes `"Hello from child!"` to the shared memory.
3. The parent process waits for the child to finish, then reads and prints the shared message.
4. Finally, the shared memory is cleaned up using `munmap()`.
![shared_memory](https://github.com/user-attachments/assets/94fbf107-df95-4766-99b9-b2777aa3bb30)
# Shared Memory Communication using System V IPC in C

This repository contains two C programs that demonstrate inter-process communication using **shared memory (`shmget`, `shmat`, `shmctl`)** in System V IPC.

## Description

The programs allow a **writer** process to store data in shared memory, which a **reader** process can later retrieve. This technique enables efficient communication between processes running on the same system.

### **How It Works**
1. The writer program creates a shared memory segment and writes data to it.
2. The reader program attaches to the same shared memory segment, reads the data, and then cleans up by removing the shared memory.
3. Both processes use **ftok()** to generate a unique key for shared memory identification.
![ipc](https://github.com/user-attachments/assets/9dba6628-31ed-472d-b3bb-b2c9596b2850)


