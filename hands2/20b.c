#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd;
	char buf[50];

	fd = open("myfifo", O_RDONLY);

	read(fd, buf, sizeof(buf));
	printf("Text fron FIFO : %s\n", buf);

	return 0;
}

