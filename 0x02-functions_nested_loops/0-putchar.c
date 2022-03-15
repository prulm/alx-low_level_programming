#include "main.h"

/**
 * main: prints _putchar
 *Return: 0 on success
 */

int main(void)
{
	char c[] = "_putchar";

	int j = 0;

	for (j = 0; j < 8; j++)
	{
		_putchar(c[j]);
	}
	_putchar('\n');
	return (0);
}
