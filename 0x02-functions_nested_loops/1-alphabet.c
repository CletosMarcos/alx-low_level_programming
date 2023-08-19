#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print the alphabet in lowercase
 * Desccription: use functions
 * Return: 0
 */

void print_alphabet(void)
{
	char az = 'a';

	while(az <= 'z')
	{
		_putchar(az);
		az++;
	}
	_putchar('\n');
}
