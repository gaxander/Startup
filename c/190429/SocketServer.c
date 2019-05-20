#include<stdio.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<ctype.h>

int main(int argc, char ** argv)
{
	struct sockaddr_in server, client;
	int serverFd, clientFd;
	int clientLength;
	serverFd = socket(AF_INET, SOCK_STREAM, 0);
	server.sin_family = AF_INET;
	server.sin_port = htons(3000);
	server.sin_addr.s_addr = inet_addr("192.168.1.100");
	bzero(&(server.sin_zero),8);
	bind(serverFd, (struct sockaddr *) &server, sizeof(server));
	listen(serverFd, 30);
	size_t size;
	char buff[1024];
	while (1)
	{
		if(clientFd = accept(serverFd,(struct sockaddr *) &client, &clientLength))
		{
			while(1)
			{
				size = recv(clientFd, buff, 1023, 0);
				buff [size] = '\0';
			        printf("recv buff is: %s", buff);	
				send(clientFd, "HelloWorld\n", 11, 0);
				if(!strncmp("quit", buff, 4))
					break;
			}
			close(clientFd);
		}
	}
	close(serverFd);
	return EXIT_SUCCESS;
}
