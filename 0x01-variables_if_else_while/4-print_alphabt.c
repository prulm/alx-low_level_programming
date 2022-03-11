#include<stdio.h>

/**
 * main - main block
 * Description: Prints the whole alphabet in lowercase followed by a new line
 * Return: 0
 */
int main(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
		if (ch == 'q' || ch == 'e')
			continue;
                putchar(ch);
                ch++;
        }

putchar('\n');
        return (0);
}
