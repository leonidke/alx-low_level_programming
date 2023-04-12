#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string,
 * or NULL if insufficient memory was available
 * or if str is NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup_str[i] = str[i];
	}
	dup_str[len] = '\0';
	return (dup_str);
}

