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
	address.sin_port = htons(8888);
	bind(sockfd,(struct sockaddr*)&address,sizeof(address));
	listen(sockfd,2);
	printf("SERVER READY...\n");
	int len = sizeof(address);
	int fd = accept(sockfd,(struct sockaddr*)&address,&len);
	char str[1000];
	while(1){
		read(fd,str,sizeof(str));
		printf("CLIENT : %s\n",str);
		if(strncmp(str,"end",3)==0) break;
		printf("YOU : ");
		fgets(str,sizeof(str),stdin);
		write(fd,str,sizeof(str));
		if(strncmp(str,"end",3)==0) break;
	}
	return 0;
}
