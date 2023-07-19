#include <stdio.h>

/**
 * main - entry point
 * Description: print all numbers of base 16 in lowercase
 *	using putchar()
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int d;
	char c;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
