#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int largest;
int a = 5, b = 7, c = 9, d;
d = a > b ? a : b;
largest = d > c ? d : c;
printf("%d\n", largest);
return (0);
}

