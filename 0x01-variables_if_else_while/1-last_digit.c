#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main block - main
 * print statments based on the last digit of the number
 * return 0 
 */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, m);
else if (m === 0)
	printf("Last digit of %i is %i and is zero\n", n, m);
else
	printf("Last digit of %i is %i and is less than 6 not 0\n", n, m);
return (0);
}
