#include "main.h"

/**
 * print_numbers - prints numbers
 * between 0 and 9
 * @i : holsds the no to be printed
 */

void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
		_putchar(48 + i);
	_putchar('\n');
}
