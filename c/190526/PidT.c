#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char ** argv)
{
	uid_t uid = getuid();
	printf("Current user's id is %d\n", uid);
	uid_t gid = getgid();
	printf("Current group's id is %d\n", gid);
	return EXIT_SUCCESS;
}
