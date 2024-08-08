#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct msgbuff{
	long int type;
	char a[1024];
	int pid;
}p;

int main(){
	int m,n,fd,m1;
	m = msgget(500,0666|IPC_CREAT);
	p.type = 1;
	p.pid = getpid();
	while(1){
		printf("You : ");
		fgets(p.a, 1024, stdin);
		msgsnd(m,&p,sizeof(p),0);
		msgrcv(m,&p,sizeof(p),p.pid,0);
		printf("\nServer : %s\n",p.a);
	}
	return 0;
}

