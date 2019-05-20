#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * file = fopen("hello.txt","r");
	char name;
	while((name = fgetc(file))!=EOF)
		putchar(name);
	return EXIT_SUCCESS;
}
