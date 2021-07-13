#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - returns pointer of contents of s1 followed by s2.
 *Description: The returned pointer should point to a newly allocated space
 *in memory which contains the contents of s1, followed by the contents of s2,
 *and null terminated
 *@s1: string 1
 *@s2: string 2
 *Return: null on failure
 */

char *str_concat(char *s1, char *s2)
{
char *p;
int i;
int j = 0;
int con = 0;


if (s2 == NULL)
{
s2 = "";
}
if (s1 == NULL)
{
s1 = "";
}
for (i = 0; s1[i] || s2[i]; i++)
{
con++;
}
p = malloc(sizeof(char) * con);
if (p == NULL)
{
return (NULL);
}
for (i = 0; s1[i]; i++)
{
p[j++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
p[j++] =  s2[i];
}

return (p);
}
