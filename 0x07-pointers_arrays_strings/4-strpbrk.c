#include "holberton.h"

/**
 *_strpbrk - locates first occurrence in string s
 *Description: locates the first occurrence in strings of any bytes in string\
 *accept
 *@s:the whole string
 *@accept:string to look for
 *Return: byte in s in accept otherwise null
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
s++;
}
return ('\0');
}
