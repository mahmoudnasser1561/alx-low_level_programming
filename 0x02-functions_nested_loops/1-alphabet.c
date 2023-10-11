#include "main.h"

/**
 * print_alphabet - Make the alphabet
 * Description: it prints alphabets using putchar
 * Return: void always
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
