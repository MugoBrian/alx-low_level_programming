#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main -entry point to program
 *@n and @l_digit parameters used 
 *Description - get last digit of a number and     subject it to if_else_conditions
 *Return - returns 0 with exit success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l_digit = n % 10;
	if (l_digit > 5)
	{
	    printf("Last digit of %d is %d and is                  greater than 5 amd not 0", n,                   l_digit);
	}
	else if (l_digit == 0)
	{
	  printf("Last digit of %d is 0 and is 0"                 ,n);
	}
	else
	{
	  printf("Last digit of %d is %d and is
                  less than 5 and not 0", n,
		 l_digit);
	}
	       
	return (0);
}
