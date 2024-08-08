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
        int running = 1;
        int msgid = msgget((key_t)5555,0666|IPC_CREAT);
        while(running==1){
		printf("Enter Message to server : ");
		fgets(data.text,MAX_TEXT,stdin);
		data.msg_type=1;
		msgsnd(msgid,(void *)&data,MAX_TEXT,0);
		if(strncmp(data.text,"end",3)==0) running=0;
        }
        return 0;
}

