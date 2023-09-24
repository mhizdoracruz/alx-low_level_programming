#include <stdio.h>
#include "lists.h"

/**
 * print_list - To check the code
 *
 * @h: pointer
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
