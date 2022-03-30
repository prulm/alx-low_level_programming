#include "main.h"

/**
 * _puts_recursion - prints string
 * @s : string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;
	print(s, i);
}
void print(char *s, int i)
{
	if (s[i] > '\0')
	{
		_putchar(s[i]);
	}
	i++;
	print(s, i);
}
