#include "holberton.h"

/**
 *_strstr - locates first occurrence in string s
 *Description: locates the first occurrence in substring needle in
 *the haystack
 *@haystack:the whole string
 *@needle:substring to look for
 *Return: pointer to beginnng of located needle or null
 */

char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
{
return (haystack);
}
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
{
return (haystack);
}
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
