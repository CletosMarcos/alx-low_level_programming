#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to determine de size of the table
 * Return: void
 */

void print_times_table(int n)
{
	int i = 0, j, e;

	if (n > 15 || n < 0)
		printf("%n", &e);
	else
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				int res = i * j;

				if (i == 0 && j == 0)
					printf("%d", res);
				else if (i != 0 && j == 0)
					printf("%d", res);
				else if ((i == 0 || j == 0) && (res == 0))
					printf(",   %d", res);
				else if (res <= 9)
					printf(",   %d", res);
				else if (res <= 99)
					printf(",  %d", res);
				else if (res >= 100)
					printf(", %d", res);
				j++;
			}
			printf("\n");
			i++;
		}
	}
}
