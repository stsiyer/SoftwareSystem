/*

============================================================================
Name : 15.c
Author : Sreeganesh T S
Description : Write a program to display the environmental variable of the user (use environ).
Date: 25th Aug, 2023.
============================================================================

*/
#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<string.h>
extern char **environ;

int main() 
{
    for (int i = 0; environ[i] != NULL; i++) 
    {
	    if(strstr(environ[i],"user")!=NULL)
		    printf("%s\n", environ[i]);
    }

    return 0;
}
