#include <stdio.h>

/**
 * main - start point
 * Description: display the size of various types
 * Return: return 0
 */
int main(void)
{
	/*types to be printed the sizes*/
	char charType;
	int intType;
	long int lintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
