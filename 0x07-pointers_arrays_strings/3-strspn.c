#include "holberton.h"

/**
 *_strspn - calculates number of bytes
 *Description:Gets the lenght of a prefix substring.
 *@s:The array of the string
 *@accept:The prefix substring
 *Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int total = 0;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
total++;
break;
}
}
else if (accept[i + 1] == '\0')
{
return (total);
}
s++;
}
return (total);
}
