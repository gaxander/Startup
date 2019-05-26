#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char ** argv)
{
	printf("MaxOpenFile number is %d\n", FOPEN_MAX);
	return EXIT_SUCCESS;
}
