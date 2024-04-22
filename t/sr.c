#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int msgid,len;
	struct mybuf{
		long mtype;
		char mtext[100];
	}send;
	key_t key;
	key = 20;
	msgid = msgget(key,IPC_CREAT|0666);
	if(msgid == -1){
		perror("MSG FAILED");
		exit(1);
	}
	strcpy(send.mtext,"Hello Biswarup");
	send.mtype=1;
	len = strlen(send.mtext);
	if(msgsnd(msgid,&send,len,0)==-1){
	printf("MSG SENDING FAILED");
	exit(1);
	}
	if(strncmp(send.mtext,"end",3)==0){
		printf("Message Sending Stopped");
		exit(1);
	}
	msgsnd(msgid,&msgid,20,0);
	return 0;
	// printf("Message From Sender %s\n",recv.mtext);
	// if(strncmp(recv.mtext,"end",3)==0){
	// 	exit(1);
	// }
	// return 0;
}
