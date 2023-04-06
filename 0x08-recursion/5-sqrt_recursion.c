#include "main.h"
#include <stdio.h>

/**
 * sqrt_op - returns the natural square root of a number.
 * @n: input number.
 * @i: iterator.
 * Return: square root or -1.
 */

int sqrt_op(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_op(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_op(n, 0));
}
