#include "holberton.h"

/**
 *_strchr -searches for occurence in a string
 *Description:The first occurrence of the character c in the string s or NULL
 *@c:character to be searched in a string
 *@s:the string array
 *Return:pointer to c or Null if otherwise
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
