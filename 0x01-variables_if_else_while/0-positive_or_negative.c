#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main -m block
 * success (0)
 * prints if the numbers is positive, negative or zero
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
                printf("d% is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else (n < 0)
                printf("%d is negative\n", n);
        return (0);
}
