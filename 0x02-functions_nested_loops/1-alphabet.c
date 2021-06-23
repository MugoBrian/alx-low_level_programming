#include "holberton.h"

/**
 *print_alphabet - prints alphabets
 *Description: prints all alphabets and a newline
 *Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
/**
 *main - entry of program
 *Description: prints alphabets
 *Returns:always zero
 */
int main(void)
{
	print_alphabet();
	return (0);
}
