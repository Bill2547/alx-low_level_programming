#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
* looped_listint_count - Counts the number of unique nodes
* @head: A pointer to the head of the listint_t to check.
* Return: If the list is not looped - 0.
*/

size_t looped_listint_count(listint_t *head)
{
	listint_t *a, *b;

	size_t nodes = 1;

	if (head == 0 || head->next == 0)
		return (0);

	a = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				nodes++;
				a = a->next;
				b = b->next;
			}
			a = a->next;
			while (a != b)
			{
				nodes++;
				a = a->next;
			}
			return (nodes);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}

/**
* free_listint_safe - Frees a listint_t list safely
* @h: A pointer to the address of the head of the listint_t list.
* Return: The size of the list that was freed.
* Description: The function sets the head to NULL.
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);
	if (nodes == 0)
	{
		for (; h != 0 && *h != 0; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = 0;
	}
	h = 0;
	return (nodes);
}
