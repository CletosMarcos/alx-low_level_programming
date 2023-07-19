#include <stdio.h>

/**
 * main - entry point
 * Description: print lowercase alphabet in reverse
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
		putchar(za);
	putchar('\n');

	return (0);
}
