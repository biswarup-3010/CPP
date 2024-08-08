#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main(){
    struct sockaddr_in address;
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = htonl(INADDR_ANY);
    address.sin_port = htons(7777);
    connect(sockfd,(struct sockaddr*)&address,sizeof(address));
    char buf[2];
    while(1){
        sleep(1);
        for(int i=0;i<2;i++) buf[i]='\0';
        read(sockfd,buf,2);
        printf("FRAME : %s\n",buf);
        if(buf[0]=='0') buf[0]='1';
        else buf[0]='0';
        write(sockfd,buf,2);
    }
    return 0;
}