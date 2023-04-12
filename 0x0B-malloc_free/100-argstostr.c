#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments into single string
 * @ac: number of command-line arguments
 * @av: array of command-line arguments
 * Return: pointer to the concatenated string,
 * or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
	}
	total_len += ac;

	str = malloc(sizeof(char) * total_len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		if (str[len] == '\0')
		{
			str[len++] = '\n';
		}
	}
	return (str);
}
