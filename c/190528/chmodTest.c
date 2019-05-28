#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(int argc, char ** argv)
{ 
        int result = fchmodat(AT_FDCWD, "test.exe", S_IRWXU|S_IRWXG|S_IRWXO, 0);
	if (result)
	{
		perror("");
		return -1;
	}	
	return EXIT_SUCCESS; 
}  
