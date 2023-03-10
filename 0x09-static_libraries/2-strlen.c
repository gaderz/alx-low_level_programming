#include "main.h"
#include <string.h>
/**
 * _strlen - print the lenght of string
 *
 * @s: value to check
 *
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
