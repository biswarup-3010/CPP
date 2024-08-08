#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
int main(){
    struct sockaddr_in cli_addr,serv_addr;
    char buf[2],f='0';
    int sockfd = socket(AF_INET,SOCK_STREAM,0);
    serv_addr.sin_family=AF_INET;
    serv_addr.sin_addr.s_addr= htonl(INADDR_ANY);
    serv_addr.sin_port=htons(5566);
    bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    listen(sockfd,1);
    int clilen=sizeof(cli_addr);
    int newsockfd=accept(sockfd,(struct sockaddr*)&cli_addr,&clilen);
    while(1){
        sleep(1);
        for(int i=0;i<2;i++) buf[i]='\0';
        buf[0]=f;
        write(newsockfd,buf,2);
        for(int i=0;i<2;i++) buf[i]='\0';
        read(newsockfd,buf,2);
        printf("ACK : %s\n",buf);
        if(f=='0') f='1';
        else f='0';
    }
    return 0;
}