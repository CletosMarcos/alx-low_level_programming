#include <stdio.h>

/**
 * main - entry point
 * Description: Print all possible combination of single digit numbers
 *	followed by " ," using ASCII
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{	putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
