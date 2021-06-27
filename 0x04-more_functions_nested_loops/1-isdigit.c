#include "holberton.h"

/**
 *_isdigit - checks if its a number
 *Description: the functions checks a number btn  *0-9
 *@c: parameter to be evaluated
 *Return:1 if a number ,0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
