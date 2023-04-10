#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the number of arguments passed
 * @argc: size of *argv
 * @argv: array of strings
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
