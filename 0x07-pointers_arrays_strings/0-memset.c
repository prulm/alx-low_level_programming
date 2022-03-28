#include "main.h"

/**
 * *_memset - fills memory with
 * a constant byte
 * @s : poiter to a string
 * @b : character to be stored
 * @n : number of mem locations
 * Return: pointer to the memory area S
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
