#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: input to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int ret;

	if (c >= '0' && c <= '9')
		ret = 1;
	else
		ret = 0;
	return (ret);
}
