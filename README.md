# IT2244-Operating-System
This C program demonstrates how to send a message using System V IPC Message Queues. It uses msgget, msgsnd, and ftok system calls to create a message queue and send a message entered by the user
Generates a unique key using ftok("progfile", 65).

Creates or accesses a message queue using msgget().

Reads a message from user input.

Sends the message using msgsnd().

ftok(): Generates a unique key for IPC mechanisms.

msgget(): Creates or accesses a message queue.

msgsnd(): Sends a message to the queue.

mesg_buffer: Struct holding the message type and content.

0666 | IPC_CREAT: Permission flags for message queue creation.

![send](https://github.com/user-attachments/assets/dd76aed8-1129-4bb8-99cc-d7c3227e238d)
This C program demonstrates how to receive a message from a System V IPC Message Queue. It complements a sender program (like 01.send) and uses msgrcv() to fetch and display the message from the queue.
Generates a unique key using ftok("progfile", 65).

Connects to the existing message queue with msgget().

Receives the message using msgrcv().

Prints the received message.

Deletes the message queue using msgctl() after receiving the message.
ftok(): Generates a consistent key using a file and an ID.

msgget(): Accesses the message queue (or creates it).

msgrcv(): Receives the message from the queue based on type.

msgctl(): Removes the message queue using IPC_RMID.
![receive](https://github.com/user-attachments/assets/f9c8f342-9a64-495c-91f0-18830bdade86)
