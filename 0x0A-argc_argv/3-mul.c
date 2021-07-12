#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that prints the result of the multiplication
 *Description: the two numbers and result of the multiplication can be stored
 *integer
 *@argc:argument count
 *@argv:argument vector
 *Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
if (argc - 1 != 2)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
}
