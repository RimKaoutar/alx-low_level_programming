#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given index of a dlistint_t
 * @h: Double pointer to the head of the list
 * @idx: Index to insert node at (0-based)
 * @n: Integer for new node's data field
 *
 * Return: Pointer to new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		current = *h;
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;

		while (i++ != idx && current)
			current = current->next;

		if (i != idx)
			return (NULL);
		new->prev = current->prev;
		new->next = current;
		new->prev->next = new;
		current->prev = new;
		return (new);
	}
}
