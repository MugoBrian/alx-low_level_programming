#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2D array
 *Description: a pointer of 2D array of integers and each element initialized to 0
 *@width: width of the grid
 *@height: height of the grid
 *Return: null on failure , a pointer to 2D array on success
 */

int **alloc_grid(int width,int height)
{
int **p;
int i,j;

if (width || height <= 0)
{
return (NULL);
}
p = malloc(sizeof(int *) *  height);

if (p == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
