#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main -start
 *Description:a program that prints all
 *possible combinations of
 *single-digit numbers.
*Return: exit 0'
*/
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
