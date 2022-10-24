#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: If the function fails 0 else element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == 0)
		return (0);

	dup = strdup(str);
	if (str == 0)
	{
		free(new);
		return (0);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = 0;

	if (*head == 0)
		*head = new;

	else
	{
		last = *head;
		while (last->next != 0)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
