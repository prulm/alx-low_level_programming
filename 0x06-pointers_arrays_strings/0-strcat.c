#include "main.h"

/**
 * *_strcat - concatinates strings
 * @src : first string
 * @dest : second string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int len,i;

	for (len = 0; dest[len]!= '\0'; len++)
	;
	for (i = 0; src[i] != '\0'; i++,len++)
	{
		dest[len] = src[i];
	}
	return (dest);
}
