#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	char buf1[1024];
	int i;

	i=read(0,buf1,sizeof(buf1));
	write(1,buf1,i);

	return 0;
}

