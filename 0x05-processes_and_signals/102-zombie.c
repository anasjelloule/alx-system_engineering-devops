/*
* File: 102-zombie.c
* Auth: Anas Jelloul
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
* infinite_while - Run infinite while loop.
*
* Return: Always 0.
*/
int infinite_while(void)
{
while (1)
{
sleep(1);
}
return (0);
}

/**
* main - Creates zombie processes.
*
* Return: Always 0.
*/
int main(void)
{
pid_t _pid;
char cnt = 0;

while (cnt < 5)
{
_pid = fork();
if (_pid > 0)
{
printf("Zombie process created, PID: %d\n", _pid);
sleep(1);
cnt++;
}
else
exit(0);
}

infinite_while();

return (EXIT_SUCCESS);
}
