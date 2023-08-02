#include "lists.h"
/**
 * free_listint_safe -  that frees a listint_t list.
 * @h: the input list
 * Return: the number nodes
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	while (*h)
	{
		size++;
		if (*h <= (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	return (size);
}
