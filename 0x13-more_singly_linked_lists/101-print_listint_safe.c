#include "lists.h"
/**
 * print_listint_safe - that prints a listint_t linked list.
 * @head: the nput list
 * Return: the number nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *slow, *fast;

	if (head == NULL)
		return (0);

	i = 0;
	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			exit(98);
		}
	}

	while (head)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}

	return (i);
}
