#include "main.h"

/**
 * _isdigit - checks if a digit
 * Return: 1 if a digit
 * 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
