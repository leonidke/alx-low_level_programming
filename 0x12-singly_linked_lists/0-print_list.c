#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elemts of a linked list
 * @h: Pointer to list_t
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d} %s\n", h->len, h->str);

	count++;
	count += print_list(h->next);

	return (count);
}
