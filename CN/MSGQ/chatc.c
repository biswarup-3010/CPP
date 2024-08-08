#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <unistd.h>
#define MAX_TEXT 50
struct msgs {
    long int type;
    char str[MAX_TEXT];
} data1, data2;
int main() {
    int msgid1 = msgget((key_t)5555, 0666 | IPC_CREAT); 
    int msgid2 = msgget((key_t)5000, 0666 | IPC_CREAT); 

    if (msgid1 == -1 || msgid2 == -1) {
        perror("msgget failed");
        exit(EXIT_FAILURE);
    }
    printf("Client on..\n");
    while (1) {
        printf("Y: ");
        fgets(data1.str, MAX_TEXT, stdin);
        data1.type = 1;
        msgsnd(msgid1, &data1, MAX_TEXT, 0);  
        if (strncmp(data1.str, "end", 3) == 0) break;
        msgrcv(msgid2, &data2, MAX_TEXT, 1, 0);
        printf("S: %s\n", data2.str);
        if (strncmp(data2.str, "end", 3) == 0) break;
    }

    return 0;
}

