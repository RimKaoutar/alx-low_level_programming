#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: address of new element or NULL if fail
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	while (str++)
		len++;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
