#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 *Description: prints Holberton
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char holberton[] = "Holberton";
	int i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
