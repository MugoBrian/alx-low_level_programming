#include "holberton.h"

/**
 *factorial - returns the factorial
 *Description: a function that returns the factorial of a given number
 *@n: number
 *Return: factorial , -1 otherwise
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n < 2)
{
return (n);
}
else
{
return (n * factorial(n - 1));
}
}
