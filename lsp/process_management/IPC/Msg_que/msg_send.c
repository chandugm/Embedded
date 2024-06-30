
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/msg.h>
    
# define KEY	11

    struct mesg{
   long int type;
	char msg[20];
    };

int main()
{
    	struct mesg message;
    	struct mesg m;
  	 
	int qid, n;
	system("clear");
    	qid = msgget(KEY, 0666 | IPC_CREAT);
//    	qid = msgget(KEY, 0666 );
	if (qid < 0) {
		perror("msgget");
		exit(0);
    	}

	message.type = 123;
	m.type=11;
	strcpy(message.msg, "testing");
	strcpy(m.msg, "chandu");
	if ((n = msgsnd(qid, &message, 20, 0)) < 0) {
		perror("msgsnd");
		exit(0);
    	}
	printf("%d\n",n);
    	printf("msg sent\n");
}
