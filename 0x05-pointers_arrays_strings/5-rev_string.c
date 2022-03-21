#include "main.h"

/**
 * rev_string - reverses a string
 * @s : string to be rev
 */

void rev_string(char *s)
{
	int i;

	int j;

	char *str;

	str = s;
	*str = *s;

	while (s[i])
		i++;
	j = i - 1;

	i = 0;

	while (s[j])
		str[i] = s[j];
}
