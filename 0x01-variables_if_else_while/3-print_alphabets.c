#include<stdio>

/**
 * main - main block
 * Description: prints the alphabet in lowercase then in uppercase followed by a new line
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
