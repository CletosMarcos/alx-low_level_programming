#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be verified
 * Return: length
 */

int _strlen(char *s)
{
	int c, a = 0;

	for (c = 0; (s[c] != '\0'); c++)
		a++;
	return (a);
}
