#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_nr = 0;
	const listint_t *trav = h;


	while (trav != NULL)
	{
		printf("%i\n", trav->n);
		trav = trav->next;
		node_nr++;
	}
	return (node_nr);
}
