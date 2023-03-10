#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatinate two strings
 * @dest: first tring to concat
 * @src: second string to concat
 * Return: Always success.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
	*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
