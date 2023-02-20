#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int a;
	char h;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
