#include "main.h"

/**
 * rev_string - reverses a string
 * @s : string to be rev
 */

void rev_string(char *s)
{
	int i;

	int j = _strlen(s);

	char str[j];

	i = 0;

	while (s[i])
	{
		str[i] = s[j];
		i++;
		j--;
	}
	while (str[j])
	{
		s[j] = str[j];
		j++;
	}

}
