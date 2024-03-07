#include "main.h"

/**
 * puts2 - Prints Odd numbers on a string
 * @str: string 
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
