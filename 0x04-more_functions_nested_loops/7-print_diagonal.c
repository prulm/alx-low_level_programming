#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @i : counter
 * @n : the number of \
 * @j : counter
 * @k : counter
 */

void print_diagonal(int n)
{
	int j = 0;

	int k = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= k; j++)
				_putchar(' ');
			_putchar('\\');
			k++;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
