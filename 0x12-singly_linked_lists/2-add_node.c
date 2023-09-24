#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - To check the code
 *
 * @head: pointer
 * @str: pointer
 *
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
