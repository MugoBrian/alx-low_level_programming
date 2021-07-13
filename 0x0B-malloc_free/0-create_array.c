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
unsigned int i;

t = malloc(sizeof(c) * size);

if (!size || !t)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
t[i] = c;
}
return (t);

}
