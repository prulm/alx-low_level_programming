#include "main.h"

/**
 * print_most_numbers -
 * prints all digits except 2 and 4
 * @i : holds the numbers
 */

void print_most_numbers(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		if (i == 50 || i == 52)	
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
