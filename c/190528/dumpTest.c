#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>

int main(int argc, char ** argv)
{
	int fd = open("test.exe", O_RDWR|O_CREAT, S_IRUSR|S_IWUSR|S_IXUSR);
	if( 0 > fd)
	{
		perror("");
		return -1;
	}
	int fd1 = dup(fd);
	if( 0 > fd1 )
	{
		perror("");
		return -2;
	}
	ssize_t w_size = write(fd1, "nn\n", 3);
	errno = 0;
	close(fd1);
	perror("");
	errno = 0;
	close(fd);
	perror("");
	return EXIT_SUCCESS; 
} 
