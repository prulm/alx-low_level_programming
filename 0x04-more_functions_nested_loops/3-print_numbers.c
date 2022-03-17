#include "main.h"

/**
 * print_numbers - prints numbers
 * between 0 and 9
 * @i : holsds the no to be printed
 */

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	
	}
	_putchar('\n');
}
