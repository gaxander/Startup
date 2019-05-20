#include<errno.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	errno = 0;
	for(int i = 0;i<128;i++)
	{
		errno = i;
		putchar(i);
		perror("");
	}
	return EXIT_SUCCESS;
}
