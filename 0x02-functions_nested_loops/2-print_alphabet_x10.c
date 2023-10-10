#include "main.h"

/**
 * print_alphabet_x10 - this is the function
 * that takes the small ones and opertae upon them
 * Description: this finction has a prototype in the main.h file
 * Return: Void Nothing
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
