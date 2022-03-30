#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s : string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
