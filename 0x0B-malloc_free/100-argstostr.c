#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the resulting string */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1; /* Add 1 for the \n character */
	}

	/* Allocate memory for the resulting string */
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Concatenate the arguments into the resulting string */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[len++] = av[i][j];
		str[len++] = '\n';
	}
	str[len] = '\0';

	return (str);
}
