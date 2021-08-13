#include "holberton.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
int i = 48;
while (i <= 57)
{
if ((i != 50) || (i != 52))
{
_putchar(i);
}
_putchar('\n');
}
