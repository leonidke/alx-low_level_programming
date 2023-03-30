#include "main.h"

/**
 * *_strcat - function to concatanate strings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */


char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
