#include "lists.h"

/**
 * listint_len - returns the number of ele'ts
 * @h: linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr_nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
