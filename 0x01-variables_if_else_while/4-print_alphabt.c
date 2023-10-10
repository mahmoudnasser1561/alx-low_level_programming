#include<stdio.h>
/**
 * main - main block
 * description: Use `putchar` to print all letters but the letter `q` and `e`.
 * Return: return (0)
 */
int main(void)
/* function main returns 0 */
/* return 0*/
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
