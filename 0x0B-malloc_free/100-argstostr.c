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
	char *str;
        int i, j, len = 0, total_len = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		if (av[i] != NULL)
			for (j = 0; av[i][j] != '\0'; j++)
				len++;
	total_len = len + ac;
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		if (av[i] != NULL)
			for (j = 0; av[i][j] != '\0'; j++)
				str[len++] = av[i][j];
	for (i = 0; i < ac - 1; i++)
		if (av[i] != NULL)
			str[len++] = '\n';
	str[len] = '\0';

	return (str);
}
