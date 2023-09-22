#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *line = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	current = malloc(sizeof(list_t));
	if (!current)
		return (NULL);

	current->str = strdup(str);
	current->len = len;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (line->next)
		line = line->next;

	line->next = current;

	return (current);
}
