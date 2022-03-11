#include<stdlib.h>
#include<time.h>

/* main entry point
 * this code tests the last digit of the random number
 */

   int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %i is %i and is ", n,l);
	if (l > 5)
		printf("greater than 5\n");
	else if (l < 6 && l != 0)
		printf("less than 6 and not 0\n");
	else
		printf("0\n");

	return (0);
}
