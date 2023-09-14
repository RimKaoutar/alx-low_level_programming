#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a dlistint_t linked list
 * @h: Pointer to head of doubly linked list
 *
 * Return: Number of nodes in list or 0 if empty
*/
size_t dlistint_len(const dlistint_t *h)
{
	int cpt = 0;

	if (h == NULL)
		return (cpt);

	while (h != NULL)
	{
		cpt++;
		h = h->next;
	}
	return (cpt);
}
