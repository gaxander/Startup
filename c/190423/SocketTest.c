#include<sys/socket.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<errno.h>

#define MAXLENGTH 1024

int main(int argc , char ** argv)
{
	char serInetAddr[30] = "0.0.0.0";
	int re = 0;
	int socketFd, clientFd;
	struct sockaddr_in sockAddr, client_sock_addr;
	char recvLine[MAXLENGTH], sndLine[MAXLENGTH];
	int n;
	socklen_t s_length;
	
	bzero(&sockAddr,sizeof(sockAddr));
	socketFd = socket(AF_INET, SOCK_STREAM, 0);
	sockAddr.sin_family = AF_INET;
	sockAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	sockAddr.sin_port = htons(5000);
	if(argc >= 2)
		re = inet_aton(argv[1], &sockAddr.sin_addr);
	if(re == 0)
	{
		printf("cmd arguments valid\n");
	}
	socketFd = socket(AF_INET, SOCK_STREAM, 0);
	char addr[20];
	if(socketFd <0)
	{
		perror("socket generated failed");
		exit(1);
	}
	int result = bind (socketFd, (struct sockaddr *) &sockAddr, sizeof(sockAddr));
	listen(socketFd, 50);
	while(1)
	{
		if((clientFd = accept(socketFd, (struct sockaddr *) &client_sock_addr, &s_length))==-1)
		{
			printf("accepted socket error: %s errno :%d\n",strerror(errno), errno);
			continue;
		}
		else
		{
			strcpy(addr, inet_ntoa(client_sock_addr.sin_addr));
			printf("accepted from <%s:%d>\n", inet_ntoa(client_sock_addr.sin_addr), client_sock_addr.sin_port);
			while((n = recv(clientFd, recvLine, MAXLENGTH, 0))>0)
			{
				if(n >= 3 && (strncmp("c:",recvLine, 2) == 0))
				{
					if((0==strcmp("127.0.0.1", addr)) && (0==strncmp("c:q",recvLine,3)))
					{
						puts("quiting server");
						close(clientFd);
						close(socketFd);
						exit(0);
					}
					if((0==strcmp("127.0.0.1", addr)) && (0==strncmp("c:t",recvLine,3)))
					{
						printf("close connection from <%s:%d>\n", inet_ntoa(client_sock_addr.sin_addr), client_sock_addr.sin_port);
						close(clientFd);
						break;
					}
				}
				if(n < 3)
				{
					printf("close connection from <%s:%d>\n", inet_ntoa(client_sock_addr.sin_addr), client_sock_addr.sin_port);
					close(clientFd);
					break;
				}
				/*
				if(n>=3 && !strcmp("127.0.0.1", addr))
				{
					close(clientFd);
					close(socketFd);
					printf("Quit Server\n");
					exit(0);
				}
				*/
				recvLine[n] = '\0';
				printf("%s",recvLine + 3);
			}
			close(clientFd);
		}
	}
	close(socketFd);
}

