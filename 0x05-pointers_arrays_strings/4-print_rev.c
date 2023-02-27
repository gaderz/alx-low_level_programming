#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string to the console
 * @s: value to be printed
 * Return: success
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		s--;

		putchar(*s);
		len--;
	}
	putchar('\n');
}
