#include "main.h"

/**
 * swap_int - swaps two integers
 * @a : the first int
 * @b : the second int
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;

	*b = *a - *b;

	*a = *a - *b;
}
