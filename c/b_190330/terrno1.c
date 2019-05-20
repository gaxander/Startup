#include<errno.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	errno = EDOM;
	perror("");
	return EXIT_SUCCESS;
}
