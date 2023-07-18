#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet in lowercase and then in uppercase
 *	using putchar()
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		putchar(az);
	for (az = 'A'; az <= 'Z'; az++)
		putchar(az);
	putchar('\n');

	return (0);
}
