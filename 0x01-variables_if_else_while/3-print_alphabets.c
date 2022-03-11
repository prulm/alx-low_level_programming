#include<stdio.h>

/**
 * main - main block
 * Description: prints the alphabet in both cases
 * Return: 0
 */

int main(void)
{
	char lc = 'a';

	char uc = 'A';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}

	putchar('\n');

	return (0);

}
