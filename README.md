Q4: Print Numbers Using Parent and Child Process and Compute Sum File:  This program demonstrates process creation using fork() to divide work between a child and a parent process.

Child Process: Prints numbers from 1 to 5 and calculates their sum.

Parent Process: Prints numbers from 6 to 10 and calculates their sum.

🧠 Key Concepts:

fork() creates a child process. Both parent and child continue from the fork() point.

Each process runs its own loop and calculates a separate sum.

sum is local to each process — changes in one do not affect the other.

📌 Purpose: To demonstrate how a task (printing and summing numbers) can be split between parent and child processes in Linux using fork().
