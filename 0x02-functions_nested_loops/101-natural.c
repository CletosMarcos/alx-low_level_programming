#include <stdio.h>

/**
 * main - print natural numbers below multiple os 3 or 5
 *
 * Return: 0
 */

int main(void)
{
	int i = 3, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
