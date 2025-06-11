#include <stdio.h> //Standard input/output functions
#include <stdlib.h>
#include <unistd.h> //UNIX standard functions (pipe, write, read,
#define MSGSIZE 16 //defines a constant MSGSIZE, which sets the message size to 16 bytes.
char* msg1 = "hello,world #1";
char* msg2 = "hello,world #2";
char* msg3 = "hello,world #3";

int main()
{
	char inbuf[MSGSIZE]; //Buffer for reading messages
	int  p[2], i; //p[2]: Array to store file descriptors for the pipe (p[0] for reading, p[1] for writing
	if (pipe(p) <  0)
		exit(1);
	/*contributed */
	/* write pipe */
	
	write(p[1], msg1, MSGSIZE); //write(fildes,message,message size)
	write(p[1], msg2, MSGSIZE);
	write(p[1], msg3, MSGSIZE);
	
	for( i = 0;i < 3;i++){
		/*read pipe*/
		read(p[0], inbuf, MSGSIZE);
        printf("Received: %s\n", inbuf);
    }

    return 0;
}
//(p[0] for reading, p[1] for writing)