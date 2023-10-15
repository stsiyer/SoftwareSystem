/*
============================================================================
Name : 19c.c
Author : Souvik Ghosh
Description : Create a FIFO file by
    mknod system call
Date: 19th Sept, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/stat.h>

int main(void) {
    mkfifo("FIFO",0666);

    return 0;
}
