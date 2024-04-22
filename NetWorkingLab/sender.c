#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(){
	int msgqid,len;
	struct msgbuf{
		long mtype;
		char mtext[100];
	}send;
	key_t key;
	key=10;
	msgqid=msgget(key,IPC_CREAT|0666);
	if(msgqid<0){
		printf("msg failed");
		exit(1);
	}
	strcpy(send.mtext,"hello");
	send.mtype=1;
	len=strlen(send.mtext);
	if(msgsnd(msgqid,&send,len,0)==-1){
		printf("msg sending failed");
		exit(1);
	}
	if(strncmp(send.mtext,"end",3)==0){
		printf("Message sending stopped");
		exit(1);
	}
	return 0;
}
