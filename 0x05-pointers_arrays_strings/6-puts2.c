#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints string, starting with the first
 * @str: the string to print
 */
void puts2(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len += 2;
	}
	_putchar('\n');
}
