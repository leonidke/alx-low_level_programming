#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: EXIT_STATUS.
 */
int main(int argc, char *argv[])
{
	int i, mult = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mult);
	}
	return (EXIT_SUCCESS);
}
