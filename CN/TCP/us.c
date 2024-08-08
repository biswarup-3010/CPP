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
    int sockfd = socket(AF_INET,SOCK_DGRAM,0);
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = htonl(INADDR_ANY);
    address.sin_port = htons(5555);
    int len = sizeof(address);
    bind(sockfd,(struct sockaddr*)&address,len);
    printf("SERVER ready\n");
    char str[100];
    while(1){
        recvfrom(sockfd,str,sizeof(str),0,(struct sockaddr*)&address,&len);
        printf("client : %s\n",str);
        if(strncmp(str,"end",3)==0) break;
        fgets(str,100,stdin);
        sendto(sockfd,str,sizeof(str),0,(struct sockaddr*)&address,len);
        if(strncmp(str,"end",3)==0) break;
    }
}
