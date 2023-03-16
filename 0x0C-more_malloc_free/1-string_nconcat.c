#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The number of bytes of s2 to concatenate
 * Return: A pointer to the concatenated string
 *         NULL if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (j = 0; s2[j] != '\0' && j < n; j++)
		len2++;
	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';

	return (result);
}
