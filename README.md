Shape Area Calculator Project

This program calculates the area of various geometric shapes (Circle, Rectangle, Square, Triangle) based on user input. It is written in C and uses a switch statement for efficient shape selection. 

To use:
1. Compile the program using a C compiler.
2. Run the executable.
3. Select a shape and enter the required dimensions.
4. Get the calculated area!

Keep coding and improving! 🚀
![area](https://github.com/user-attachments/assets/2624e028-fd86-4811-81f8-39481f7d5e1f)
# Inter-Process Communication using Pipes

This C program demonstrates **Inter-Process Communication (IPC)** between a parent and child process using **UNIX pipes**. The parent process writes messages into a pipe, while the child process reads and prints them.

## Features
- **Creates a pipe** for communication between processes.
- **Uses `fork()`** to create a child process.
- **Parent writes** multiple messages into the pipe.
- **Child reads** and prints the messages.
- Ensures **proper closing** of pipe endpoints to prevent resource leaks.

## Usage
1. Compile the program:
gcc -o ipc_pipe ipc_pipe.c
2. Run the executable:
./ipc_pipe
3. The parent process will send messages to the child through the pipe.
4. The child process will read and display the messages.

## Example Output
hello,world #1 hello,world #2 hello,world #3 Finished reading

## Requirements
- A **C compiler** (GCC, Clang, etc.)
- A **UNIX-based system** (Linux, macOS) for `pipe()`, `fork()`, and `wait()` functionality.

## License
This project is open-source and available under the **MIT License**.

---

Feel free to improve and extend this project! 🚀

![exersize](https://github.com/user-attachments/assets/c41753e0-3741-4191-b1b1-460691142433)

# Notes on C Programming Projects

## 1️⃣ Shape Area Calculator

### 🔹 Overview:
This C program calculates the area of four geometric shapes:
- **Circle**
- **Rectangle**
- **Square**
- **Triangle**

### 🔹 Functionality:
- Uses a **switch statement** for shape selection.
- Takes user input for dimensions.
- Computes and displays the **area** of the selected shape.

### 🔹 Key Concepts:
- **User Input Handling (`scanf`)**
- **Mathematical Operations**
- **Control Flow (`switch-case`)**

## 2️⃣ Inter-Process Communication (IPC) using Pipes

### 🔹 Overview:
This C program demonstrates **Inter-Process Communication (IPC)** between a **parent** and **child** process using **UNIX pipes**.

### 🔹 Functionality:
- The **parent writes messages** into the pipe.
- The **child reads and prints** the messages.
- Proper closing of pipe endpoints ensures smooth communication.

### 🔹 Key Concepts:
- **Process Creation (`fork()`)**
- **Pipe Communication (`pipe()`)**
- **File Descriptors (`read()`, `write()`)**

## 3️⃣ IPC Calculator using Two Pipes

### 🔹 Overview:
This program enhances **IPC with two pipes**, enabling **bidirectional communication** between parent and child processes.

### 🔹 Functionality:
- The parent process **sends two numbers and an operator** to the child.
- The child **performs the arithmetic operation** and returns the result.
- Uses **two pipes** (`pipe1` for parent-to-child, `pipe2` for child-to-parent).

### 🔹 Key Concepts:
- **Bidirectional Pipes**
- **Arithmetic Computation in Child Process**
- **Process Synchronization**

---

📌 **Summary**:
These programs showcase fundamental concepts in **C programming**, such as:
- **Mathematical computations**
- **User input handling**
- **Process creation and communication**
- **System calls (`fork`, `pipe`, `read`, `write`)**

🛠 **Next Steps**:
- Optimize code efficiency.
- Expand functionality.
- Add error handling for robustness.

🚀 **Keep exploring and coding!**

![homework](https://github.com/user-attachments/assets/fdd09c51-d31d-4449-bac5-19622b735a8d)
