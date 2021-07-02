#include "holberton.h"

/**
 *print_numbers - print numbers
 *Description:a function that prints numners 0 to 9 and a new line
 *Return: 0 on success
 */

void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}

_putchar('\n');
return (0);
}
