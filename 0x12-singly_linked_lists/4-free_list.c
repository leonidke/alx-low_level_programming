#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the list
 * @head: head of the linked list.
 * Return: NO return.
 */

void free_list(list_t *head)
{
	list_t *curr_ptr;

	while ((curr_ptr = head) != NULL)
	{
		head = head->next;
		free(curr_ptr->str);
		free(curr_ptr);
	}
}
