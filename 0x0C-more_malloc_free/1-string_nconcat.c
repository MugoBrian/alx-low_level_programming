#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *Description: returned pointer shall point to a newly allocated space in memory
 *@s1 - string 1
 *@s2 - string 2
 *@n - number of bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = n, j;
void *p;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

for (j = 0; s1[j]; j++)
{
i++;
}
p = malloc(sizeof(char) * (i + 1));
if (concat == NULL)
{
return NULL;
}
i = 0;
for (j = 0; s1[j]; j++)
{
p[j++] = s1[j];
}
for (j = 0; s2[j] && j < n; j++)
{
p[j++] = s2[j];
}
p[i] = '\0';

return (p);
}

