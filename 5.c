#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd1=creat("/home/vboxuser/Documents/software_system/file1",O_EXCL);
      int fd2=creat("/home/vboxuser/Documents/software_system/file2",O_EXCL);

      int fd3=creat("/home/vboxuser/Documents/software_system/file3",O_EXCL);

      int fd4=creat("/home/vboxuser/Documents/software_system/file4",O_EXCL);

      int fd5=creat("/home/vboxuser/Documents/software_system/file5",O_EXCL);

      while(1)
      {

      }

return 0;
}

	
