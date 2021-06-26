#include "holberton.h"

/**
 *_isupper -checks if a character is alphabet
 *Description: if alphbaet is upper return 1
 *@ch: parameter to evaluate
 *Return: 1 if its uppercase,0 otherwise
 */

int _isupper(int c)
{
	if ((ch >= 'A') && (ch <= 'Z'))
		return (1);
	else
		return (0);
}
