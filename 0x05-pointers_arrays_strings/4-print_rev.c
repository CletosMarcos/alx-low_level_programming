#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	
	for (count--; count >= 0; count--)
		_putchar(s[count]);
	
	_putchar('\n');
}
