#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *	in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0, aux = 1, aux2 = 1, i, term;

	while (i < 30)
	{
		term = aux + aux2;
		if (term % 2 == 0)
			sum += term;
		if (sum <= 4000000)
		{
			aux = aux2;
			aux2 = term;
		}
		else
			break;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
