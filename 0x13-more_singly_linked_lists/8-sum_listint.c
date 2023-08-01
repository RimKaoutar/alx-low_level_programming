#include "lists.h"

/**
 * sum_listint -> A function that returns
 * the sum of all the data (n) of a listint_t
 * @head: is the Input list
 * Return: deleted the condition
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
	       head = head->next;
	}
	return (sum);
}
