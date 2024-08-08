#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define KEY 500
#define MAX 102421
struct msgbuff {
    long int type;
    char a[MAX];
    int pid;
} p1,p2;

int main() {
    int m = msgget(KEY, 0);
    p1.type = 1;
    while (1) {
        printf("You : ");
        fgets(p1.a, MAX, stdin);
	pid_t pid;
	p1.pid = getpid();
        msgsnd(m, &p1, sizeof(p1), 0);
        msgrcv(m, &p2, sizeof(p2), p1.pid, 0);
        printf("\nServer : %s\n", p2.a);
    }

    return 0;
}
