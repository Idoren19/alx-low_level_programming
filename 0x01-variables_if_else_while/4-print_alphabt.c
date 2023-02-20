#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	char h;

	for (h = 'a' ; h <= 'z' ; h++)
		if (h != 'q' && h != 'e')
			putchar(h);
	putchar('\n');
		return (0);
}
