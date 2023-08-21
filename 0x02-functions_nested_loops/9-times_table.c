#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	char i = 0, res, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			res = i * j;

			if (res > 9)
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}
			else
				_putchar('0' + res);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
