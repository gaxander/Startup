#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int arvc, char ** argv)
{
	//char * filename = "/home/jay/lan/CodenRepeator/c/190526/test.exe";
	char * filename = "/home/jay/lan/CodenRepeater/c/190526/test.exe";
	int fd = open(filename, O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	if(0> fd)
	{
		perror("");
		return 1;
	}
	char name[20] = "abc adc adc abc abc";
	ssize_t w_size = pwrite(fd, name, 20, 1996); 
	if( 0 != w_size )
	{
		perror("");
		return -1;
	}
	close(fd);
	return EXIT_SUCCESS;
} 
