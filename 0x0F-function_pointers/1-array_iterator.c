#include "function_pointers.h"

/**
 * array_iterator - function that takes integer:
 * @array: integer array
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
