#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *create_array - creates an array of chars and initializes it with
  *@size: size of array.
  *@c: char to initialize array with.
  * specific character
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
