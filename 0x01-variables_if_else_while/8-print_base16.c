#include<stdio.h>

/**
 * main - main block
 * Description: prints the alphabet in both cases
 * Return: 0
 */

int main(void)
{
	int n = 0;

	char ch = 'a';

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);

}
