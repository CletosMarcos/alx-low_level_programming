#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0;
 */

int main(void)
{
	int count = 0, aux = 1;

	while (count <= 50)
	{
		aux += count;
		(count == 50)?
			printf(",%d", aux):
			printf("%d, ", aux);
		count++;
	}
	printf("\n");
	return (0);
}
