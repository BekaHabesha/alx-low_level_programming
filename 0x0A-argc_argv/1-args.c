#include "main.h"
#include <stdio.h>

/**
* main - prints the name of arguments passed to the program
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
