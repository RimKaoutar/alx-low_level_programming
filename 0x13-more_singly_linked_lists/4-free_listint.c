#include "lists.h"
/**
 * free_listint - that frees a listint_t list.
 * @head: is the input of the list
*/
void free_listint(listint_t *head)
{
	listint_t *gone;

	while (head != NULL)
	{
		gone = head;
		head = head->next;
		free(gone);
	}
}
