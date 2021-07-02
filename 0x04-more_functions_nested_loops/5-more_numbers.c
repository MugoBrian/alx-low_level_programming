include "holberton.h"

/**
 *more_numbers - prints 0 to 14 numbers
 *Description:prints 0 t0 14 numbers 10 times
 *Return:0
 */

int more_numbers(void)
{
int count = 0;
int n;

while (count <= 10)
{
for (n = 0; n <= 14; n++)
{_putchar(n + '0');
}
_putchar('\n');
}
_putchar('\n');
return (0);
}
