#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints string, starting with the first
 * @str: the string to print
 */
void puts2(char *str)
{
	int i, l;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < i; l += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}