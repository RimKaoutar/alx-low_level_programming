#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts
 * a new node at a given position.
 * @head: is the Input list
 * @idx: is the Index
 * @n: is the  value
 * Return: depend of the condition
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}
