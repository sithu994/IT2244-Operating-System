# Pipe-Based Interprocess Communication

This repository contains C programs that demonstrate interprocess communication using pipes in a parent-child process setup.

## Overview

The programs in this repository:
- Use pipes to pass data from a **parent process** to a **child process**.
- The **parent process** collects user input (name, registration number, and age).
- The **child process** retrieves the data from the pipe and displays it.

## Files Included

- `exercise.c` - Reads user input in the parent process, passes it through a pipe, and prints the received data in the child process.
- `pipe.c` - A simplified version of the IPC mechanism using a pipe.


![exer](https://github.com/user-attachments/assets/d0d25328-788f-4960-a59d-0c54791d8302)
# Interprocess Communication Using Pipes

This repository contains a simple C program demonstrating **Interprocess Communication (IPC)** using pipes.

## Overview

The program:
- Uses a **pipe** for data transfer between different sections of execution.
- Writes **three messages** (`hello, world #1`, `hello, world #2`, `hello, world #3`) into the pipe.
- Reads and prints the received messages.

## Files Included

- `pipe_example.c` - The main program implementing pipe-based IPC.

## How to Run

1. Compile the program using:

   ```bash
   
   gcc pipe_example.c -o pipe_example
   
