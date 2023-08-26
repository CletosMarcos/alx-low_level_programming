#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{

	/*int ch = 'A', ret;*/
	int ret;

	if (c >= 'A' && c <= 'Z')
		ret = 1;
	else if (c >= 'a' && c <= 'z')
		ret = 0;
	return (ret);
}
