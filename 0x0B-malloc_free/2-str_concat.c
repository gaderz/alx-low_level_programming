#include "main.h"
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int s1_size = 0, s2_size = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_size))
		s1_size++;

	while (*(s2 + s2_size))
		s2_size++;

	concat_str = malloc(sizeof(char) * (s1_size + s2_size + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		*(concat_str + i) = *(s1 + i);

	for (j = 0; j < s2_size; j++)
		*(concat_str + i + j) = *(s2 + j);

	*(concat_str + i + j) = '\0';

	return (concat_str);
}
