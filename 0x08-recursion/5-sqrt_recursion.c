#include "holberton.h"
int sq(int c, int i);
/**
 *_sqrt_recursion - returns the natural square root
 *Description: function that returns the natural square root of a number
 *@n:natural number
 *Return:n does not have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
return (sq(n, 1));
}

/**
 *sq - helper function to solve _sqrt_recursion
 *@c: number to determine to the square
 *@i: incrementer
 *Return: square root if natural number
 */

int sq(int c, int i)
{
int sqre = i * i;
if (sqre == c)
{
return (i);
}
else if (sqre < c)
{
return (sq(c, i + 1));
}
else
{
return (-1);
}
}
