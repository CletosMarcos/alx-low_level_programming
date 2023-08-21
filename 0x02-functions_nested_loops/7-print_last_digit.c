#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = -1 * (n % 10);
		_putchar('0' + ld);
	}
	else
	{
		ld = 1 * (n % 10);
		_putchar('0' + ld);
	}

	return (ld);
}
