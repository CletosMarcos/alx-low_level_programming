#include <stdio.h>

/**
 * main - entry point
 * Description: print alphabet in lowercase, except 'q' and 'e'
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char qe;

	for (qe = 'a'; qe <= 'z'; ++qe)
	{
		if (qe != 'q' && qe != 'e')
			putchar(qe);
	}
	putchar('\n');

	return (0);
}
