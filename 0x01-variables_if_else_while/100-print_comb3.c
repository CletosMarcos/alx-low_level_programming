#include <stdio.h>

/**
 * main - entry point
 * Description: Print all possible different combinations of two digits.
 *	separated by , and followed by a SPACE
 *	the two digits must be different
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8')
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
