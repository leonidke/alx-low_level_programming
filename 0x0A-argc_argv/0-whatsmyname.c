#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s is the name of the program\n", argv[0]);
	return (0);
}
