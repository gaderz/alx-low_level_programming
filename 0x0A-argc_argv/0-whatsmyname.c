#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: array of command line argument strings
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
