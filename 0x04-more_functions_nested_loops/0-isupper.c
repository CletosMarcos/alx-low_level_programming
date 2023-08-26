#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{

	int ch = 'A', ret;

	while (ch <= 'Z')
	{
		if (ch == c)
		{
			ret = 1;
			break;
		}
		else
		{
			ret = 0;
			break;
		}
	}
	return (ret);
}
