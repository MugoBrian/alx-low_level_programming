#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - allocates memory
 *Description: allocates memory using malloc function and returns a pointer
 *@b:bytes
 *Return: if fails returns 98 value else return a pointer
 */

void *malloc_checked(unsigned int b)
{

void *p = malloc(b);
if (!p)
{
exit(98);
}
return (p);
}
