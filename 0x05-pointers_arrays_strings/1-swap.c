#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer one to be swaped
 * @b: integer two to be swaped
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
