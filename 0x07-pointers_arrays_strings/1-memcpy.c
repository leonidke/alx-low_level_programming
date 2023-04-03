#include "main.h"

/**
 * *_memcpy - copies memory area
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes
 *
 * Return: pointer to destination dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n--)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
