#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns
 * the nth node of a listint_t
 * @head: is the Input list
 * @index: is the Index Node
 * Return: is the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i++ == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
