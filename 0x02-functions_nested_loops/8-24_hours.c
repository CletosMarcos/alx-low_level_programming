#include "main.h"

/**
 * jack_bauer - prints every minute the day, starting from 00:00 to 23:59
 *
 * Return: void;
 */

void jack_bauer(void)
{
	int i = 0, j, k, l;

	while (i <= 2)
	{
		j = 0;

		while (j <= 9)
		{
			if (i == 2 && j > 3)
				break;
			else
			{
				k = 0;

				while (k <= 5)
				{
					l = 0;

					while (l <= 9)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
						_putchar('\n');
					l++;
					}
				k++;
				}
			}/*end of else*/
		j++;
		}
	i++;
	}
}
