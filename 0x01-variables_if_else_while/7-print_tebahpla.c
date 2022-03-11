#include<stdio.h>

/**
 * main - main block
 * Description: Prints the whole alphabet reversed in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'z')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}
