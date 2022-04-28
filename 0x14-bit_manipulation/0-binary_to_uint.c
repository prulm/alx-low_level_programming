#include "main.h"

/**
 * binary_to_uint - converts a binary
 * 		    to an usigned int
 * @b : pointer to the string
 * Return : converted number
 *	: 0 if non-binary or null
 */

unsigned int binary_to_uint(const char *b)
{
	int i, bin, rem, weight, count = 0;
	unsigned int dec;


	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	bin = atoi(b);
	while (bin != 0)
	{
		rem = bin % 10;
		dec = dec + rem * weight;
		bin = bin / 10;
		weight = weight * 2;
	}
	return (dec);
}
