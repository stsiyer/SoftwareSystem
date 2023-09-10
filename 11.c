/*
============================================================================
Name : 11.c
Author : Sreeganesh T S
Description :Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
Date: 25th Aug, 2023.
============================================================================
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
	int fd1,fd2;

	fd1=open("seek_file",O_RDWR);

	fd2=dup(fd1);
	int fd4= fcntl(fd1,F_DUPFD);
	
	int fd3=dup2(fd2,5);
	printf("fd1=%d \n, fd2=%d\n",fd1,fd2);
	printf("fd2=%d \n, fd3=%d\n",fd2,fd3);
  printf("fd4=\n",fd4);
	getchar();

	return 0;

}

