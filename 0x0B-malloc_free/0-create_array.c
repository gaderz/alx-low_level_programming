#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific chars.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
