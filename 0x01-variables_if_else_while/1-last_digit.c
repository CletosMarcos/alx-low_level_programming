#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: print the last digit of a number and inform if digit is:
 *	> 5
 *	= 0
 *	< 6 && !=0
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int n, last_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_Digit = n % 10;

	if (last_Digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_Digit);
	else if (last_Digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_Digit);
	else if (last_Digit < 6 && last_Digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
				last_Digit);
	return (0);
}
