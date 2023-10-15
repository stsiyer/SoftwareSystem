/*
============================================================================
Name : 31b.c
Author : Souvik Ghosh
Description : Write a program to create a semaphore and initialize value to the semaphore.
b. create a counting semaphore
Date: 20th Sept, 2023.
============================================================================
*/

#include<unistd.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<stdio.h>

int main(void) {
    union semun {
        int val;
    } arg;
    
    key_t key = ftok(".", 'b');
    int semid = semget(key, 1, IPC_CREAT | 0600);

    arg.val = 5;
    semctl(semid, 0, SETVAL, arg);

    struct sembuf buff = {0, -1, 0};

    semop(semid, &buff, 1);
    buff.sem_op = 1;
    semop(semid, &buff, 1);

    return 0;
}
