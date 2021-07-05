#include "holberton.h"
#include <stdio.h>

/**
 *_memset - function fills first
 *Description:The function fills the first n bytes of the memory area pointed
 *to by s with the constant byte b.
 *@s:A pointer to the memory area with
 *@b:The character to fill in the memoryh area with
 *@n:The number of bytes to be filled.
 *Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, usigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

