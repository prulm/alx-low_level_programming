#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest : destination of mem area
 * @src : source of memory area
 * @n : number of mem areas copied
 * Return : character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
