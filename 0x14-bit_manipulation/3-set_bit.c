#include "holberton.h"

/**
 * set_bit - sets bit on index to 1
 * @n: decimal number
 * @index: index of the bit
 * Return: the bit found
 */

int set_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGHT)
		return (-1);

	n >> index = (n >> index) | 1;
}
