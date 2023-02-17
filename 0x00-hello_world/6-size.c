#include <stdio>
/**
 * main - various types of computer
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %i byte(s)\n", sizeof(a));
printf("size of int %i byte(s)\n", sizeof(b));
printf("size of long int: %i byte(s)\n", sizeof(c));
printf("size of long long int: %i byte(s)\n", sizeof(d));
printf("size of float: %i byte(s)\n", sizeof(f));
return (0);
}
