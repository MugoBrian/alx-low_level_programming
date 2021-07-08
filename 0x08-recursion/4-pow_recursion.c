#include "holberton.h"

/**
 *_pow_recursion - returns the power
 *Description: a function that returns the value of x raised to the power of y
 *@x: number
 *@y:power
 *Return: factorial , -1 otherwise
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
