#include "main.h"

/**
 * _puts - prints string
 * @str : string
 */

void print_rev(char *str)
{
	int i = 0;

	int j;

	while (str[i])
		i++;
	j = i - 1;

	while (str[j])
	{
		_putchar(str[j]);
		j--;
	}
		_putchar('\n');
}

