#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0;
 */

int main(void)
{
	int count = 2;
	long aux = 1, aux2 = 2, res;
	/*count = 2 considering i'm printing 1 and 2 out of the while loop*/

	printf("1, 2, ");
	while (count <= 49)
	{
		res = aux + aux2;
		(count == 49) ?
			printf("%li", res) :
			printf("%li, ", res);
		aux = aux2;
		aux2 = res;
		count++;
	}
	printf("\n");
	return (0);
}
