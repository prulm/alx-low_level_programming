#include "main.h"

/**
 * *_strchr - locates a char in a string
 * @s - string
 * @c - character
 * Return: Null or character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}
	return ('\0');
}
