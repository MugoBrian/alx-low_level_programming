#include "holberton.h"

/**
 *_puts_recursion - prints a string in reverse
 *Description: a function that prints a string in reverse
 *@s:character to print
 *Return: Always 0
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
