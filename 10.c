/*10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data.*/
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
