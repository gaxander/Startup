#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>

int main(int argc, char ** argv)
{
	char * filename = "test.exe";
	int fd = open(filename, O_RDONLY);
	int result = fcntl(fd, F_GETFL);
	if( 0 > result)
	{
		perror("");
		return -1;
	}
	if(O_RDONLY == (result & O_RDONLY))
	{
		puts("O_RDONLY");
	}
	if(O_WRONLY == (result & O_WRONLY))
	{
		puts("O_WRONLY");
	}
	if(O_RDWR== (result&O_RDWR))
	{
		puts("O_RDWR");
	}
	if(O_FSYNC== (result&O_FSYNC))
	{
		puts("O_FSYNC");
	}
	if(O_APPEND== (result&O_APPEND))
	{
		puts("O_APPEND");
	}
	if(O_SYNC== (result&O_SYNC))
	{
		puts("O_SYNC");
	}
	return EXIT_SUCCESS;
}
