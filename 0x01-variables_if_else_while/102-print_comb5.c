#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations of two two-digit numbers
 *	range from 0-99
 *	considering 00 01 and 01 00 the same combination of the numbers 0 and 1
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i; /*, j, k, l;*/

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
		putchar(i);
		putchar('\n');
		putchar(44);
		putchar(32);
		/*for (j = '0'; j < '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);

					*making sure not to print ', ' after the last combination*
					if ((i == '9') && (j == '8'))
					{
						continue;
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}*/
	}
	putchar('\n');

	return (0);
}
