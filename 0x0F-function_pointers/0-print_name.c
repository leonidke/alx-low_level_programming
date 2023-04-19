#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name of the person
 * @f: funtion pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
