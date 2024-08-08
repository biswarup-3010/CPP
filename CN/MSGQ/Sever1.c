#include<stdio.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#define MAX_TEXT 100
struct my_msg{
	long int msg_type;
	char text[MAX_TEXT];
}data;
int main(){
	int running = 1,msg_to_rcv = 0;
	int msgid = msgget((key_t)5555,0666|IPC_CREAT);
	while(running==1){
		msgrcv(msgid,(void*)&data,MAX_TEXT,msg_to_rcv,0);
		printf("Message from client : %s\n",data.text);
		if(strncmp(data.text,"end",3)==0) running=0;
	}	
	msgctl(msgid,IPC_RMID,0);
	return 0;
}
