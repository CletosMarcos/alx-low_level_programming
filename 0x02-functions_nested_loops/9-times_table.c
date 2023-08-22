#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, res, j;

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
			else if (res != 0)
			{
				_putchar(' ');
				_putchar('0' + res);
			}
			else
			{
				_putchar('0' + res);
			}
			if (j != 9)
			{
				if (res == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			
			j++;
		}
		_putchar('\n');
		i++;
	}
}
