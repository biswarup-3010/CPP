#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
int main(){
	int msgid = msgget((key_t)555,0666|IPC_CREAT);
	if(msgid < 0) printf("Not created\n");
	else printf("Created\n");
	return 0;
}
