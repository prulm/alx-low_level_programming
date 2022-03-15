#include "main.h"

/**
 * _islower - entry point
 * Desc: checks if lowercase or not
 * @c: takes in a character
 * return: 1 if lowercase 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
