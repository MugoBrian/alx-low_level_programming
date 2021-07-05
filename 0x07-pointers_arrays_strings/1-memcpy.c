#include "holberton.h"

/**
 *_memcpy -copies n bytes from src to dest
 *Description:The function copies n bytes from src to memory area dest
 *@dest:The destination memory area
 *@src:The source memory area
 *@n:the bytes
 *Return:a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
