#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char ** argv)
{
	int result = faccessat(AT_FDCWD, "test.exe", R_OK|W_OK|X_OK, 0);
	if( 0 == result )
	{
		puts("read, write, exec granted");
		return -1;
	} 
	return EXIT_SUCCESS;
}  
