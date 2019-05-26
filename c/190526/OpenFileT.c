#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<errno.h>
#include<unistd.h>

int main(int argc, char ** argv)
{
	const char * filename = "/home/jay/nanjingnan.txt";
	errno = 0;
	int fd = open(filename, O_CREAT|O_RDWR| O_APPEND, S_IRUSR|S_IWUSR|S_IXUSR);
	if(fd < -1)
	{
		perror("");
		return -1;
	}
	write(fd, "nanjingn", 8);
	errno = 0;
	close(fd);
	return EXIT_SUCCESS;
}

