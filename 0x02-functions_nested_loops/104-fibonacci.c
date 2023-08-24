#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0;
 */

int main(void)
{
        int count = 2;
        unsigned long int aux = 1, aux2 = 2, res;
        /*count = 2 considering i'm printing 1 and 2 out of the while loop*/

        printf("1, 2, ");
        while (count <= 97)
        {
                res = aux + aux2;
                (count == 97) ?
                        printf("%lu", res) :
                        printf("%lu, ", res);
                aux = aux2;
                aux2 = res;
                count++;
        }
        printf("\n");
        return (0);
}

