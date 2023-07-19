#include <stdio.h>

/**
 * main - entry point
 * Description: print all possible different combinations of three digits.
 *	separated by , and a SPACE
 *	The three digits must be different
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i < '7')
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
