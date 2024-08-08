#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int msgqid,len;
	struct msgbuff{
		long type;
		char text[100];
	}send;
	key_t key = 10;
	msgqid = msgget(key,IPC_CREAT|0666);
	if(msgqid<0){
		printf("Message failed");
		exit(1);
	}
	send.type=1;
	strcpy(send.text,"Hello");
	len = strlen(send.text);
	if(msgsnd(msgqid,&send,len,0)==-1){
		printf("Message sending failed\n");
		exit(1);
	}
	if(strcmp(send.text,"end")==0){
		printf("Message sending stopped\n");
		exit(1);
	}
	return 0;
}
