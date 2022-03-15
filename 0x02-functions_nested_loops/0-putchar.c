#include<stdio.h>
#include "main.h"

/**
 * main - main block
 * Description: Prints _putchar
 * Return: 0 on success
 */

int main(void)
{
    char c[] = "_putchar";

    int j;

    for (j = 0; j < 8; j++)
	{
		_putchar(c[j]);
	}
	_putchar('\n');
	return (0);
}
