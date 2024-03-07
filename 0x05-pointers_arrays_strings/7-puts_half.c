#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string, followed by new line
 * @str: string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;


	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;


	for ( ; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');

}
