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
    address.sin_port = htons(5555);
    int len = sizeof(address);
    bind(sockfd,(struct sockaddr*)&address,len);
    listen(sockfd,2);
    int fd = accept(sockfd,(struct sockaddr*)&address,&len);
    printf("SERVER ready\n");
    char str[100];
    while(1){
        read(fd,str,sizeof(str));
        printf("client : %s\n",str);
        if(strncmp(str,"end",3)==0) break;
        fgets(str,100,stdin);
        write(fd,str,sizeof(str));
        if(strncmp(str,"end",3)==0) break;
    }
}
