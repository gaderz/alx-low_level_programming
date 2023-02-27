#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to the console
 * @str: value to be printed
 * Return: success
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
