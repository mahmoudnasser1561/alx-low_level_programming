#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - this function checks if + or -
 * @i: this is to  be checked
 * Return: Void no retirn
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
}
