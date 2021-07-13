#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *Description: returns a pointer and a copy of the string given as a parameter.
 *@str: the string given as a parameter.
 *Return: pointer to the duplicated string on success ,null if insufficient.
 */

char *_strdup(char *str)
{
char *p;
int i;
int size = 1;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
size++;
}
p = malloc(sizeof(char) * size);

if (p == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
p[i] = str[i];
}
p[size - 1] = '\0';
return (p);
}
