#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * Return: abs
 */

int _abs(int n)
{
	int abs;

	if (n > 0)
		abs = n - 0;
	else if (n == 0)
		abs = 0;
	else
		abs = 0 - n;

	return abs;
}
