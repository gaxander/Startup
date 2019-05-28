#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(int argc, char ** argv){
	struct stat fileStat;
	int stat_result = fstatat(AT_FDCWD, "test.exe", &fileStat, 0);
	printf("stat->mode_t: %d\n", fileStat.st_mode);
	printf("stat->st_ino: %ld\n", fileStat.st_ino);
	printf("stat->st_dev: %ld\n", fileStat.st_dev);
	printf("stat->st_nlink_t: %ld\n", fileStat.st_nlink);
	printf("stat->st_uid: %d\n", fileStat.st_uid);
	printf("stat->st_gid: %d\n", fileStat.st_gid);
	printf("stat->st_size: %ld\n", fileStat.st_size);
	printf("stat->st_blksize: %ld\n", fileStat.st_blksize);
	printf("stat->st_blocks: %ld\n", fileStat.st_blocks);
	return EXIT_SUCCESS; 
} 
