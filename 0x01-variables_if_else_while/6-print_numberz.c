#include <stdio.h>
/*
 * main - main block entry point.
 * Description: this function prints numbers from 0 to 9 in chars.
 * you are only allowed to use putchar().
 * and only two times.
 * you are not allowed to use any variable of type `char`.
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
