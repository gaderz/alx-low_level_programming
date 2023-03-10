#include "main.h"

/**
 * _strncpy -  copys a strings.
 * @dest: string to be copied to.
 * @src: string to be copied from.
 * @n: maximum number of characters to be copied from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
