#include "lists.h"
/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: Number of nodes printed from the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int cpt = 0;

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cpt++;
	}
	return (cpt);
}
