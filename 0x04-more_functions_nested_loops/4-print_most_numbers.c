include "holberton.h"

/**
 *print_most_numbers - print most numbers between 0 to 9
 *Description:prints all numbers between 0 to 9 except 2 and 4
 *Return: 0 on success
 */
void print_most_numbers(void)
{
int n;

for (n = 0; n < 10; n++)
{
if (n != 2)
|| (n != 4)
{
_putchar(n + '0');
}
}
_putchar('\n');
}
