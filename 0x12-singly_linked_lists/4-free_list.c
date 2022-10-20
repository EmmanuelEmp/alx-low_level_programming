#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it is a function that free list_t
 * @head: the first element
 * Return: no
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
