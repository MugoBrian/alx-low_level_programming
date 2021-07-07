#include "holberton.h"

/**
 *print_diagsums - prints sum of two matrices
 *Description: prints sum of the two diagonals of a square matrix of integers
 *@a:the array
 *@size: size of the array
 */

void print_diagsums(int *a, int size)
{
int i;
int total1 = 0, total2 = 0;
for (i = 0; i < size; i++)
{
total1 += a[i];
a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
total2 += a[i];
a -= size;
}
printf("%d\n",total1,total2);
}

