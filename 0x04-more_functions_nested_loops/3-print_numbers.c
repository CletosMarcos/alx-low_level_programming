#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers from 0 - 9, followed by a new line
 *
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
