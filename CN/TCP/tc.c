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
    connect(sockfd,(struct sockaddr*)&address,len);
    char str[100];
    while(1){
        printf("YOU : ");
        fgets(str,100,stdin);
        write(sockfd,str,sizeof(str));
        if(strncmp(str,"end",3)==0) break;
        read(sockfd,str,sizeof(str));
        printf("%s\n",str);
        if(strncmp(str,"end",3)==0) break;
    }
    return 0;
}
