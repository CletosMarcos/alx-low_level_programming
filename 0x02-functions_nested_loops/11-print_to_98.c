#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 8
 * @n: starting number
 * Return: 0
 */

int print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
		printf("\n");
	}

	return (0);
}
