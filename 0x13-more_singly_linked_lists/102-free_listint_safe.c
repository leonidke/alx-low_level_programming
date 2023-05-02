#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;

		if (next >= current)
		{
			*h = NULL;
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
		current = next;
	}

	*h = NULL;
	return (count);
}
