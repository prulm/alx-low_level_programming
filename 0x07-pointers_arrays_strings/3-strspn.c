#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s : string
 * @accept : prefix substring
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k;

	for (j = 0; s[j] >= '\0'; j++)
	{
		for (k = 0; accept >= '\0'; k++)
		{
		if (s[j] == accept[k])
			i++;
		}
	}
	return (i);
}
