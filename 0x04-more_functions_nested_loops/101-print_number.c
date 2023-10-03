#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int res1, res2;

	if (n >= 0 && n < 10)
		_putchar('0' + n % 10);
	else if (n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else if (n >= 100 && n < 1000)
	{
		res1 = n / 10;
		_putchar('0' + res1 / 10);
		_putchar('0' + res1 % 10);
		_putchar('0' + n % 10);
	}
	else if (n >= 1000) /*and less than 10000*/
	{
		res1 = n / 10;
		res2 = res1 / 10;
		_putchar('0' + res2 / 10);
		_putchar('0' + res2 % 10);
		_putchar('0' + res1 % 10);
		_putchar('0' + n % 10);
	}
	else if (n < 0)
	{
		printf("%d", n);
		/*res1 = n;
		_putchar('1');
		_putchar('0' + res1 / 10);
		_putchar('0' + res1 % 10);*/
	}

}
