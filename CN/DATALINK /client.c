#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main(){
    struct sockaddr_in serv_addr;
    char buf[50];
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serv_addr.sin_port=5566;
    connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    while(1){
        sleep(1);
        for(int i=0;i<5;i++) buf[i]='\0';
        recv(sockfd,buf,5,0);
        printf("FRAME : %s\n",buf);
        if(buf[0]=='0') buf[0]='1';
        else buf[0]='0';
        send(sockfd,buf,5,0);
    }
    return 0;
}