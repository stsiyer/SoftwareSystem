#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
	int fileDes = creat("FileDes1",O_RDWR);

	printf("%d",fileDes);

	return 0;
}

