#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *trav = h;
	size_t node_nr = 0;

	while (trav != NULL)
	{
		printf("%d\n", trav -> n);
		node_nr++;
	}
	return(node_nr);
}
