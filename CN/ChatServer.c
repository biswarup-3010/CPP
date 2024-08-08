#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct msgbuff {
    long int type;
    char a[1024];
    int pid;
} p;

int main() {
    int m;
    m = msgget(500, 0666 | IPC_CREAT);
    if (m == -1) {
        perror("msgget");
        return 1;
    }

    p.type = 1;

    while (1) {
        if (msgrcv(m, &p, sizeof(p) - sizeof(long int), 1, 0) == -1) {
            perror("msgrcv");
            return 1;
        }

        printf("\nClient : %s\n", p.a);

        int client_pid = p.pid;  // Save client's PID

        printf("You : ");
        fgets(p.a, 1024, stdin);

        p.type = client_pid;     // Send message back to the client
        p.pid = getpid();

        if (msgsnd(m, &p, sizeof(p) - sizeof(long int), 0) == -1) {
            perror("msgsnd");
            return 1;
        }
    }

    return 0;
}
