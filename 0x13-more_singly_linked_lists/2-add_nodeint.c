#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds an element
 * to a start of a linked list
 * @*head : linked list
 * @n : data
 * Return : address of the element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	
	newnode = (listint_t *) malloc (sizeof(listint_t));
	newnode->n = n;
	newnode->next = head;
	heade = newnode;
}
