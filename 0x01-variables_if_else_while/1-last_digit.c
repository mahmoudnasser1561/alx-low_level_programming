#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main block - main
 * print statments based on the last digit of the number
 * return 0 
 */
int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld= n % 10;
if (ld > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, ld);
else if (ld == 0)
	printf("Last digit of %i is %i and is zero\n", n, ld);
else
	printf("Last digit of %i is %i and is less than 6 not 0\n", n, ld);
return (0);
}
