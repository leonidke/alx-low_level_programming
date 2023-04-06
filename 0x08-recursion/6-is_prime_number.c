#include "main.h"
#include <stdio.h>

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @b: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int n, unsigned int b)
{
	if (n % b == 0)
	{
		if (n == b)
		{
			return (1);
		}
		return (0);
	}
	return (0 + is_prime(n, b + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
