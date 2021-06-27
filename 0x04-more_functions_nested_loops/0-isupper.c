#include "holberton.h"

/**
 *_isupper -checks if a character is alphabet
 *Description: if alphbaet is upper return 1
 *@c: parameter to evaluate
 *Return: 1 if its uppercase,0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
