#include "main.h"

/**
 * print_alphabet_x10 - main function
 * Return: void
 */

void print_alphabet_x10(void)
{

	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		c = 'z';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
