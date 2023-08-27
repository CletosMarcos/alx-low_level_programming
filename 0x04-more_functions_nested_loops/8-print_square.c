#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 */

void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
