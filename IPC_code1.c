//01.send

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 10
// structure for message queue
struct mesg_buffer{
	long mesg_type;
	char mesg_text[100];
}message;
int main()
{
	key_t key;
	int msgid;
	// ftok to generate unique keykey = fork
	key = ftok("progfile", 65);
	// msgget creates a message queue
	// and returns identifier
	msgid = msgget(key, 0666 | IPC_CREAT);
	message.mesg_type = 1;
	printf("Write Data: ");
	fgets(message.mesg_text,MAX,stdin);
	// msgsend to send message
	msgsnd(msgid, &message, sizeof(message), 0);
	//display the message
	printf("Data send is : %s \n", message.mesg_text);
	return 0;
}



//02.receive
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h> // for sleep
#define MAX 10

//strucure for messege queue
struct mesg_buffer{
long mesg_text[100];
}message;
int main(){
key_t key;
int msgid;
//ftok to generate unique key
key = ftok("progfile", 65);
//msgget creates a messege queue
//and returns identifier
msgid = msgget(key, 0666 | IPC_CREAT);
//msgrcv to send messege
msgrcv(msgid,&message, sizeof(message), 1, 0);
//display the messege
printf("Data receved is: %s \n",message.mesg_text);
// TO display the message queue
msgctl(msgid, IPC_RMID, NULL); //L
return 0;
}
//03.Run only our prcess

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

#define MAX 10

// Structure for message queue
struct mesg_buffer {
    long mesg_type;  // Corrected field name
    char mesg_text[100];
} message;

int main() {
    key_t key;
    int msgid;

    // ftok to generate unique key
    key = ftok("progfile", 65);

    // msgget creates a message queue and returns identifier
    msgid = msgget(key, 0666 | IPC_CREAT);

    message.mesg_type = 1;
    printf("Write Data: ");
    fgets(message.mesg_text, MAX, stdin);

    // msgsnd to send message
    msgsnd(msgid, &message, sizeof(message.mesg_text), 0);

    // Display the message
    printf("Data sent is: %s \n", message.mesg_text);

    return 0;
}