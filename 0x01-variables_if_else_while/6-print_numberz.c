#include<stdio.h>

/**
 * main - main block
 * Description: prints numbers between 0 and 9
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
