#include "holberton.h"

/**
 *_strlen_recursion - returns length of a string
 *Description: function that returns the length of a string
 *@s:string
 *Return:length of the string
 */

int _strlen_recursion(char *s)
{
int count = 0;
if (*s == '\0')
{
return (0);
}
count = 1 + _strlen_recursion(s + 1);
return (count);
}
