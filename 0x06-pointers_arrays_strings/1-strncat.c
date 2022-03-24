#include "main.h"

/**
 * *_strcat - concatinates strings
 * @src : first string
 * @dest : second string
 * @n : characters from src
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
	;
	for (i = 0; i < n; i++, len++)
	{
		dest[len] = src[i];
	}
	return (dest);
}