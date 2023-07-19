#include <stdio.h>

/**
 * main - entry point
 * Description: print all single digit numbers of base 10
 *	starting from 0 using putchar(), ascii
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
