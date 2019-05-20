#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
	for(int i=0;i<128;i++)
		putc((char)i,stdout);
	return EXIT_SUCCESS;
}
