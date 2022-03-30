#include "main.h"

/**
 * print - prints string
 * @s : string
 * @n : integer
 */

void print(char *s, int i)
{
	if (s[i] > '\0')
	{
		_putchar(s[i]);
	}
	i++;
	print(s, i);
}
