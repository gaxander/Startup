#include<stdio.h>
#include<netinet/in.h>
#include<errno.h>
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
	char inbuff[1024];
	char stdinbuff[1024];
	strcpy(stdinbuff, "beijing");
	clientFd = socket(AF_INET, SOCK_STREAM, 0);
	server.sin_family = AF_INET;
	server.sin_addr.s_addr = inet_addr("192.168.1.100");
	server.sin_port = htons(3000);
	bzero(&(server.sin_zero),8);
	size_t sendR, recvR;
	serverFd = connect(clientFd, (struct sockaddr *) & server, sizeof(server));
	if(serverFd == 0)
	{
		for(int index = 0; index < 20; index ++)
		{
			sendR = send(clientFd, stdinbuff, 6, 0);
			perror("error in send()");
			recvR = recv(clientFd, inbuff, 1023, 0);
			inbuff[recvR] = '\0';
			printf("recv string is : %s", inbuff);
			send(clientFd, "quit", 4, 0);
		}
		/*recvR = recv(serverFd, stdinbuff, 1023, 0);
		stdinbuff[recvR] = '\0';
		printf("get from server:\n%s", stdinbuff);
		sendR = send(serverFd, "quit", 4, 0);
		close(serverFd);*/	
	}
	return EXIT_SUCCESS;
}
