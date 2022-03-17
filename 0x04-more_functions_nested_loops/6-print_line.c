#include "main.h"

/**
 * print_line - draws a straight line
 * @n - how many times _ is used
 * @i - counter
 */
void print_line(int n)
{
	if (n <= 0)
	_putchar('\n');
	else
	{
		for (int i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}