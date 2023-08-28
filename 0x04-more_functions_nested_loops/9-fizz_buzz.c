#include <stdio.h>

/** main - entry point
 *	print numers from 1 to 100, followed by a new line
 *	for numbers multiples of 3 print Fizz intead of the number
 *	for numbers multiples of 5 print Buzz
 *	for numers witch are multiples of both 3 and 5 print FizzBuzz
 * Return: 0;
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
                        printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
