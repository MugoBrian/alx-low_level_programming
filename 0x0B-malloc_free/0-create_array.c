#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that creates an array of char
 *Description: creates an array of char and initializes it with a specific char
 *@size:size of the array
 *@c:char c
 *Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
char *t;
int i;
if (size == 0)
{
return (NULL);
}
t = malloc(sizeof(*t) * size);
if (t == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
t[0] = c;
}
return (t);

}
