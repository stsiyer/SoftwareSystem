#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
	int fd;

	fd=open("seek_file",O_CREAT|O_RDWR,0744);

	write(fd,"I am batman ....\n",15);

	lseek(fd,10,SEEK_CUR);

	write(fd," No I am superman \n",15);

	close (fd);
 return 0;

}
