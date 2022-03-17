#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n : the number of \
 * Return: none
 */

void print_diagonal(int n)
{
	int j = 0;

	int i;

	int k = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
				_putchar(' ');
			_putchar('\\');
			k++;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
