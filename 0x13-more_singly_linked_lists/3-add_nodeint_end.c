#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @head: is the Input list
 * @n: is the input of the list
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	return (new);
}
