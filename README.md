# IT2244-Operating-System!
This C program demonstrates process creation and synchronization using fork(), wait(), and sleep().

The parent process creates a child process using fork().

The child process sleeps for 2 seconds and then exits.

The parent process waits for the child to finish using wait() and prints the child’s exit status.

This example helps understand basic parent-child process behavior in Unix/Linux systems.[fork1](https://github.com/user-attachments/assets/34ceb002-de31-4c5a-ae53-61c90317c933)
This C program demonstrates the use of the sleep() function to pause execution.

It prints a start message,

Sleeps for 3 seconds,

Then prints an exit message and exits cleanly using exit(0).
![exit](https://github.com/user-attachments/assets/2e1b6652-ad3c-4ff5-a86a-94a79307600b)
This C program demonstrates how a parent process creates and synchronizes with two child processes using fork() and wait().

The parent creates two child processes.

Each child sleeps for a different duration (1 and 3 seconds), then exits.

The parent waits for both children to finish before printing a final message.
![ex1](https://github.com/user-attachments/assets/5c3abcbf-72ae-4b86-be28-f43613ef9a6c)
This C program demonstrates how a parent process creates two child processes, waits for them to finish, and retrieves their individual exit statuses.

The parent creates two children using fork().

Each child sleeps for a different amount of time and exits with a unique status (2 and 1).

The parent uses wait() twice to detect which child finishes first and prints their PIDs and exit statuses.
![ex2](https://github.com/user-attachments/assets/f69043d8-1d2a-43aa-aef6-922fa1c9436e)
This C program demonstrates process hierarchy and synchronization involving a parent, child, and grandchild process.

The parent creates a child process.

The child creates a grandchild process.

The grandchild sleeps for 2 seconds and exits with status 2.

The child waits for the grandchild to finish, prints its exit status, then exits with status 55.

The parent waits for the child to finish and prints its exit status.
![ex3](https://github.com/user-attachments/assets/6a294e24-2152-4a38-b0db-c4f911ce8dee)
