#include "main"

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
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
