#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet in lower case using function putchar()
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char al;

	/* using "for" loop to print the alphabet*/
	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	putchar('\n');

	return (0);
}
