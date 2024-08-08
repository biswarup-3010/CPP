#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int msqid,len;
	long int msg_to_rec = 0;
	struct msgbuff{
		char text[100];
		long type;
	}recv;
	key_t key = 10;
	msqid = msgget(key,IPC_CREAT|0666);
	if(msqid == -1){
		perror("msgget() failed\n");
		exit(1);
	}
	if(msgrcv(msqid,&recv,sizeof(recv.text),msg_to_rec,0)<0){
		perror("Msg failed");
		exit(1);
	}
	printf("msg from sender : %s\n",recv.text);
	if(strcmp(recv.text,"end")==0){
		exit(1);
	}
	msgctl(msqid,IPC_RMID,0);
	return 0;
}
