#include "main.h"

/**
 * _isdigit - checks if a digit
 * Return: 0 or 1
 * @c : holds character value
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
