#include <stdio.h>

/**
 * main - entry point
 * Description: prints the largest prime factor of the number 612852475143
 *	followed by a new line
 * Return: 0;
 */

int main(void)
{
	/*int val = 1231952*/
	long val = 612852475143,/*612852475143*/ maxPrime, save;
	long i = 2;

	while (i < 612852475143)
	{
		if (val % i == 0)
		{
			int j = 2, count = 0;

			while (j < i)
			{
				if (i % j == 0)
				{
					count++;
				}
				j++;
			}
			if (count == 0)
			{
				save = val / i;
				if (save == 1)
				{
					maxPrime = val;
					printf("%ld\n", maxPrime);
					break;
				}
				val = save;
				i--;
			}
		}
		i++;
	}
	return (0);
}
