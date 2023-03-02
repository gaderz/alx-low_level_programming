#include "main.h"
#include <stddef.h>
/**
 * *_strncpy - more concatination
 * @dest: string 1
 * @src: string 2
 * @n: the interger
 * Return: Always success
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	char *ret = dest;

	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (ret);
}
