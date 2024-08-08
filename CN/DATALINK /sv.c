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
    int len = sizeof(address);
    bind(sockfd,(struct sockaddr*)&address,len);
    listen(sockfd,1);
    int fd = accept(sockfd,(struct sockaddr*)&address,&len);
    char buf[2],f='0';
    while(1){
        sleep(1);
        for(int i=0;i<2;i++) buf[i]='\0';
        buf[0]=f;
        write(fd,buf,2);
        for(int i=0;i<2;i++) buf[i]='\0';
        read(fd,buf,2);
        printf("ACK : %s\n",buf);
        if(f=='1') f= '0';
        else f = '1';
    }
    return 0;
}