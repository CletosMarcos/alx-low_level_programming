#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array, separated by commas and a space
 * @n: number of elements
 * @a: pointer to the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		
		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
