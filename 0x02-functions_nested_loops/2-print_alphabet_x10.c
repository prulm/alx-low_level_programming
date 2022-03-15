#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * prints the alphabet 10 times in lowercase
 */

void print_alphabet_x10(void)
{
	int j = 9;

	for (; j >= 0; j--)
	{
		for (c = 'a'; c<= 'z'; c++)
		_putchar(c);
		_putchar('\n');
	}
}
