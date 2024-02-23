#include "main.h"

/**
 * swap_int - swap the values of two Integers
 * @a: 1st value
 * @b: 2nd value
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
