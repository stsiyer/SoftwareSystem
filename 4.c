#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
	int fileDes= open("FileDes1",O_EXCL,0600);

	if(fileDes<0)
	{
		printf("Failed to Open");
	}
	else
	{
	printf("Open");
	}
return 0;
}

