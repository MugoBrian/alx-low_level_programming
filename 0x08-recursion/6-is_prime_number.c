#include "holberton.h"

/**
 *is_prime_number - function of prime number
 *Description: a function that returns 1 if integer is a prime number
 *@n: number
 *Return: 1 if integer a prime number else 0 otherwise
 */

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
if (n < 4)
{
return (1);
}
return (prime(n, 2));
}

/**
 *sqrt - return the square root of number
 *@x:number
 *@i:number incrementer
 *Return: square root of x
 */

int sqrt(int x, int i)
{;
int sq;
sq = i * i;
if (sq >= x)
{
return (i);
}
else
{
return (sqrt(x, i + 1));
}
}
/**
 *prime - helper function that determines the prime number
 *Description: determines if its a prime number
 *@n: number to test
 *@d: number increment
 *Return: returns 1
 */
int prime(int n, int d)
{
if (n % d == 0)
{
return (0);
}
else if (sqrt(n, 1) < d)
{
return (1);
}
else
{
return (prime(n, d + 1));
}
}
