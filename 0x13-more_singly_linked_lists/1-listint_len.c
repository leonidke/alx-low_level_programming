#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		num_elements++;
		h = h->next;
	}

	return (num_elements);
}
