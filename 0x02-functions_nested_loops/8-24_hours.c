#include "main.h"

/**
 * jack_bauer - prints every minute the day, starting from 00:00 to 23:59
 *
 * Return: void;
 */

void jack_bauer(void)
{
	int h = 00, m = 00;

	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar(h);
			_putchar(':');
			_putchar(m);
			_putchar('\n');
		}
	}
}
