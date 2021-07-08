#include "holberton.h"

int is_prime_number(int n);
int is_divisible(int n, int d);
/**
 *is_divisible  - checks a number is divisible
 *Description: a function that checks a number is divisible
 *@n: number
 *@d:divisor
 *Return: 0 is divisible and -1 if not
 */

int is_divisible(int n, int d)
{
if (n % d ==  0)
{
return (0);
}
if (d == n / 2)
{
return (1);
}
return (is_divisible(n, d + 1));
}

/**
 *is_prime_number - helper function that determines the prime number
 *Description: determines if its a prime number
 *@n: number to test
 *Return: returns 1
 */

int is_prime_number(int n)
{
int d = 2;

if (n <= 1)
{
return (0);
}
if (n >= 2 && n <= 3)
{
return (1);
}
return (is_divisible(n, d));
}
