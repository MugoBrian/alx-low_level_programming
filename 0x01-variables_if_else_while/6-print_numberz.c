#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry of program
 *Description: Prints 0-9 numbers
 *Return: exit 1
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
