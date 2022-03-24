#include "main.h"

/**
 * print_number - prints int
 * @n : integer to be printed
 */

void print_number(int n)
{
	if (n <= 9)
	{
	_putchar(48 + n);
	}
	else if (n <= 99)
	{
		_putchar(48 + (n / 10));
		_putchar(48 + (n % 10));
	}
	else if (n <= 999)
	{
		_putchar(48 + (n / 100));
		_putchar(48 + (((n % 100) - (n % 10)) / 10));
		_putchar(48 + (n % 10);
	}
	else if (n <= 9999)
	{
		_putchar(48 + (n / 1000));
		_putchar(48 + ((n % 1000) - (n % 100)) / 100);
		_putchar(48 + (n % 100) / 10;
		_putchar(48 + (n % 10);
	}
}
