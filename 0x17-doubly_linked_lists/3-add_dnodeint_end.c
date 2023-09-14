#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node to the end of a dlistint_t list
 * @head: Double pointer to head of list
 * @n: Integer for new node value
 *
 * Return: Pointer to new node or NULL on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->next)
		*head = (*head)->next;
	(*head)->next = new;
	new->prev = *head;
	return (new);
}
