#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints string, starting with the first
 * @str: the string to print
 */
void puts2(char *str)
{
	int len, l;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (l = 0; l < len; l += 2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
