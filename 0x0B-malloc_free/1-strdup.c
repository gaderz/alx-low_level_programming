#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory containing
 *           a copy of the string given as parameter.
 * @str: The string to duplicate.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	new_str = malloc(sizeof(char) * (size + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_str[i] = str[i];
	new_str[size] = '\0';

	return (new_str);
}
