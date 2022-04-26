#include "lists.h"

/**
 * sum_listint - prints all the elements of a list.
 * @head: head of a list.
 * Return: sum.
 */
int sum_listint(const listint_t *head)
{
	int sum = 0;
	listint_t *trav;

	if (head == NULL)
		return (0);

	trav = head;

	while (head != NULL)
	{
		head = head->next;
		sum = sum + trav->n;
	}
	return (sum);
}
