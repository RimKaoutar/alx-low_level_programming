#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index index
 * @head: the Input of list
 * @index: the Index of node
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *gone;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp && tmp->next)
	{
		if (i++ == index - 1)
		{
			gone = tmp->next;
			tmp->next = gone->next;
			free(gone);
			return (1);
		}
		tmp = tmp->next;
	}

	return (-1);
}
