#include "main.h"

/**
 * more_numbers - prints numbers
 * b/n 0 and 14 10 times
 */

void more_numbers(void)
{
	int j, c;

	for (int i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;

		if (j > 9)
		{
			_putchar('1');
			c = j % 10;
		}
		_putchar('0' + c);
		}
		_putchar('\n');
	}
}
