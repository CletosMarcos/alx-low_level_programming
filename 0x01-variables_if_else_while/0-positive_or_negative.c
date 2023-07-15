#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if the number generated randomly in the variable n is:
	 *  greater than 0:
	 *  	print-> (value) is positive
	 *  less than 0:
	 *  	print-> (value) is negative
	 *  equal to 0:
	 *  	print-> (value) is zero
	 */ 
	if (n > 0)
		printf("%d\n is positive", n );
	else if (n = 0)
		printf("%d\n is zero", n );
	else 
		printf("%d\n is negative", n );
	return (0);
}
