#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s : string
 * @accept : prefix substring
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;

	for (j = 0; s[j] >= '\0'; j++)
	{
		for (k = 0; accept > '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				i++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (i);
}
