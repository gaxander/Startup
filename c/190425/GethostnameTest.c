#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctype.h>
#include<sys/types.h>
#include<errno.h>
#include<string.h>

#define HOSTNAME_LENGTH 256

int main(int argc, char ** argv)
{
	char hostname[HOSTNAME_LENGTH];
	size_t length = HOSTNAME_LENGTH;
	int result = 0;
	result = gethostname(hostname, length);
	if(result )
	{
		printf("get hostname failed\n");
		perror("");
		exit(1);
	}
	printf("host name is %s\n",hostname);
	return EXIT_SUCCESS;
}
