/*8. Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include<stdio.h>
int main()
{

	int fd= open("/home/vboxuser/Documents/software_system/link.c",O_RDONLY);

	if(fd<0)
	{
		printf(" Failed /n");

		return 0;
	}
       char buf[1024];
	while(1)
	{
		int count=0;

		while(1)
		{
                  int rd=read(fd,&buf[count],1);
                   count+=rd;
		  if(count==0||buf[count -1]=='\n'|| count==1024)
		  {
			  break;
		  }

		 }

		int wr=write(1,buf,count);
	  
		if(count==0)
		{
			break;
		}
	}
	close(fd);
return 0;	
}
