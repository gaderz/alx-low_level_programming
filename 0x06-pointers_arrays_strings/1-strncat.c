#include "main.h"
/**
 * *_strncat - contatinate two strings with int
 * @dest: string 1
 * @src: string 2
 * @n: integer
 * Return: Always success
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
	ptr++;
	}

	while (*src != '\0' && i < n)
	{
	*ptr++ = *src++;
	i++;
	}
	*ptr = '\0';
	return (dest);
}
