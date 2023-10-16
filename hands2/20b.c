/*
============================================================================
Name : 20b.c
Author : Sreeganesh T S
Description : Write two programs so that both can communicate by FIFO -Use one way communication.
Date: 19th Sept, 2023.
============================================================================
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(void) {
    int buff[80];
    int fd = open("fifo", O_RDONLY);
    read(fd, buff, sizeof(buff));
    printf("The text: %s\n", buff);

    return 0;
}
