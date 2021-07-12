#include "holberton.h"
#include <stdio.h>

/**
 *main - program that prints its name
 *Description: a new line is followed after the name, if you name the program
 *it will print the new name.
 *@argc:argument count
 *@argv:argument vector
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void) argc;

printf("%s\n", argv[0]);

return (0);
}
