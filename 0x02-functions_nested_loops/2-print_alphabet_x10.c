#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	/*char az = 'a';*/
	unsigned int cont = 0;

	while (cont < 10)
	{
		char az = 'a';

		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		_putchar('\n');
		cont++;
	}
}
