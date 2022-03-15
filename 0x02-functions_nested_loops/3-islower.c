#include "main.h"

/**
 * _islower(int) - entry point
 * checks if lowercase or not
 * return: 1 if lowercase 0 otherwise
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
