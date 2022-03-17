#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size : size of triangle
 */

void print_triangle(int size)
{
	int i;

	int j;

	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
		for (i = size; i > 1; i--)
		{
			_putchar(' ');
		}
		for (k = 0; k <= j; k++)
		_putchar('#');
		}
		_putchar('\n');
	}
}
