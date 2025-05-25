Description
This C program demonstrates process creation using fork(). It:

Takes three numbers as input from the user.

Uses parent-child process hierarchy to:

Calculate the factorial of the first number.

Generate the Fibonacci series up to the second number.

Find all prime numbers up to the third number.

Each task is handled by a separate child process, and proper process IDs are displayed for understanding process relationships.

🧮 Functional Breakdown
Main Parent Process: Initiates execution and prints its PID.

Child Process A: Calculates factorial of the 1st number.

Sub-Parent Process: Spawns two more children:

Child Process B: Generates Fibonacci series.

Child Process C: Finds prime numbers.# IT2244-Operating-System![q1](https://github.com/user-attachments/assets/e10e7aac-e8e1-4407-b410-f1f7fb29fe37)
# Process Creation in C Using fork()

This C program demonstrates how to use multiple child processes created by `fork()` to perform different tasks concurrently.

## Program Features
- Takes **three numbers** as input from the user.
- Creates **three child processes**:
  - Child 1: Calculates the **factorial** of the first number.
  - Child 2: Calculates the **power** of the second number raised to 1.
  - Child 3: Calculates the **square** of the third number.
- The parent process waits for all children to complete and displays its process ID.

![homework](https://github.com/user-attachments/assets/e5e8e2c1-944e-4017-8a34-98b3ba29c98d)
