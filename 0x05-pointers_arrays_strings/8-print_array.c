#include<stdio.h>
#include "main.h"

/**
 * print_array - prints n array elements
 * @a : array
 * @n : number of array elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%i", a[i]);
	}
	printf("\n");
}
