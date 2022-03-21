#include "main.h"

/**
 * puts_half - prints half of
 * a string
 * @str : string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i /= 2;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
