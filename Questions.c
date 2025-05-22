//(Q1) Parent-child process

#include <stdio.h>
#include <unistd.h>
int main(){

	printf("\nHello World!");
	int f=fork();
	int p=getpid();
	printf("\n the pid is %d",p);
	printf("\n the fork is %d",f);

return 0;
}
................................

//Q2) multiple processes.
#include <stdio.h>
#include <unistd.h>
int main(){

	fork();//print 2 time
	fork();
	printf("\nHello World\n");
	
return 0;
}
.................................

//q3.how to distinguish between a parent and a child process using the return value of the fork() system call

#include <stdio.h>
#include <unistd.h>
int main(){

	int f = fork();
	if(f==0)
	{
		printf("I am child\n");
	}
	else
	{
		printf("I am parent\n");
	}
	
return 0;
}

//q4.uses two fork() calls to create a parent, a child, and a sibling process.

#include <stdio.h>
#include <unistd.h>

int main() {
    int f1 = fork();  
    
    if (f1 == 0) {
        int f2 = fork();  
        
        if (f2 == 0) 
		{
            printf("I am Sibiling\n"); 
			printf("My parent ID %d\n",getppid());
        } 
		else 
		{
            printf("I am Child\n"); 
			printf("My parent ID %d\n",getppid());
        }
    } 
	else 
	{
        printf("I am Parent\n");
		printf("My ID %d\n",getpid());
		printf("My parent ID %d\n",getppid());
    }
    
    return 0;
}

//q5).identifies the parent (A), the child (B), and the grandchild (C) 

#include <stdio.h>
#include <unistd.h>

int main() {
    int f1 = fork();
    
    if (f1 == 0) 
	{
        int f2 = fork(); 
        
        if (f2 == 0) 
		{  
            printf("I am Sibling (C)\n");
            printf("My Process ID: %d\n", getpid());
            printf("My Parent ID: %d\n", getppid());
            fflush(stdout);
        }
		else 
		{  
            printf("I am Child (B)\n");
            printf("My Process ID: %d\n", getpid());
            printf("My Parent ID: %d\n", getppid());
            fflush(stdout);
        }
    } 
	else 
	{ 
        printf("I am Parent (A)\n");
        printf("My Process ID: %d\n", getpid());
        fflush(stdout);
    }

    return 0;
}
//q6).uses two fork() calls to create three processes with clearly defined roles: Parent A, Child B, and Sibling C. 

#include <stdio.h>
#include <unistd.h>

int main() {
    int f1 = fork(); 
    int f2;

    if (f1 == 0) 
	{
        printf("I am Child B\n");
        printf("My Process ID: %d\n", getpid());
        printf("My Parent ID: %d\n", getppid()); 
    } 
	else 
	{  
        f2 = fork(); 

        if (f2 == 0) { 
            printf("I am Sibling C\n");
            printf("My Process ID: %d\n", getpid());
            printf("My Parent ID: %d\n", getppid()); 
        } 
		else 
		{
            printf("I am Parent A\n");
            printf("My Process ID: %d\n", getpid());
        }
    }

    return 0;
}







