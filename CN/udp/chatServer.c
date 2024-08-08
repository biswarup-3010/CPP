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
	address.sin_port = htons(8888);
	bind(sockfd,(struct sockaddr*)&address,sizeof(address));
	printf("SERVER READY...\n");
	char str[1000];
	int len = sizeof(address);
	while(1){
		recvfrom(sockfd,str,sizeof(str),0,(struct sockaddr*)&address,&len);
		printf("CLIENT : %s\n",str);
		if(strncmp(str,"end",3)==0) break;
		printf("YOU : ");
		fgets(str,1000,stdin);
		sendto(sockfd,str,sizeof(str),0,(struct sockaddr*)&address,len);
		if(strncmp(str,"end",3)==0) break;
	}
	return 0;
}
