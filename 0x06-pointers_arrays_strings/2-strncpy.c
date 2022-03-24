#include "main.h"

/**
 * *_strncpy - concatinates strings
 * @src : first string
 * @dest : second string
 * @n : characters from src
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
