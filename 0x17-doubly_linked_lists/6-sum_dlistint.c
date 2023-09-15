#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data elements of a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: Sum of all elements' data (n) fields or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
