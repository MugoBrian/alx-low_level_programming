#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main- begin of program
 * Description: printd out the alphabets in
 * lowercase character alphabets
 * Return: exit 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}

