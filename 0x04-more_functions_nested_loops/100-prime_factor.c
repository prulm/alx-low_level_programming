#include<stdio.h>

/**
 * main - finds the largest
 * prime factor of 612852475143
 * Return: 0 on success
 */

int main(void)
{
	long largest;
	
	long i;

	long n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0)
			largest = i;
	}
	printf("%ld", largest);
return (0);
}
