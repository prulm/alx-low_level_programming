#include "main.h"

/**
 * clear_bit - sets bit on index to 0
 * @n: decimal number
 * @index: index of the bit
 * Return: 1 (success) or -1(faillure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BYTE_LENGTH))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
