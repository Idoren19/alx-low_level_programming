#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
		putchar(h);
	putchar('\n');
	return (0);
}
