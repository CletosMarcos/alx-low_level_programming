#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{

	int ch = 'A';

	while (ch <= 'Z')
	{
		if (ch == c)
		{
			return (1);
			break;
		}
		else
		{
			return (0);
			break;
		}
	}
}
