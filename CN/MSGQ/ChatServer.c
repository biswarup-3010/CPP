#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define KEY 500
#define MAX 1024
struct msgbuff{
	long int type;
	char a[1024];
	int pid;
}p;

int main(){
	int m,fd,n;
	m = msgget(KEY,0666|IPC_CREAT);
	while(1){
		msgrcv(m,&p,sizeof(p),1,0);
		printf("\nClient : %s\n",p.a);
		fd = open(p.a,O_RDONLY);
		n = read(fd,p.a,MAX); 
		p.type = p.pid;
		p.pid = getpid();	
		printf("\nYou : ");
		fgets(p.a, MAX, stdin);
		msgsnd(m,&p,sizeof(p),0);
	}
	return 0;
}

