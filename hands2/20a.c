#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd;
	char buf[50];

	fd = open("myfifo", O_WRONLY);
	
	printf("Enter the text : ");
	scanf("%[^\n]", buf);

	write(fd, buf, sizeof(buf));

	return 0;
}
