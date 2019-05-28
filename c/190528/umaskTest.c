#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(int argc, char ** argv)
{ 
	mode_t c_mode = umask(S_IRUSR|S_IWUSR|S_IXUSR);
	printf("former umask is %d\n", c_mode);
	return EXIT_SUCCESS; 
}  
