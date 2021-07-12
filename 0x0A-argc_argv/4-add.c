#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that prints the result of two positive numbers
 *Description: the two numbers and result of the addition can be stored
 *integer
 *@argc:argument count
 *@argv:argument vector
 *Return: 0 on success, 1 on error
 */


int main(int argc, char *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
return (printf("Error\n"), 1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
