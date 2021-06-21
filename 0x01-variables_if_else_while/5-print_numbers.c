#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry of program
 *Description: Prints 0-9 numbers
 *Return: exit 1
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d \n", num);
		num++;
	}
	return (0);
}
