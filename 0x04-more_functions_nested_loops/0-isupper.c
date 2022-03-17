#include "main.h"

/**
 * _isupper - checks if a letter
 * is uppercase
 * Return: 1 if uppercase
 * 0 otherwise
 * @c : the letter
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
