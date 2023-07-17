#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * Description: print to standard error
 * Return: 1 (Success)
 */

int main(void)
{
	const char *msg = "and that piece of art is useful\"
- Dora Korpar, 2015-10-19\n";

	fwrite(msg, sizeof(char), strlen(msg), stderr);

	return (1);
}
