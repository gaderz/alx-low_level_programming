#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: numbers of size to be printed
 * Return: Always Success
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= size; a++)
	{
		for (b = size - a; b > 1; b--)
		{
			_putchar(32);
		}
		for (c = 1; c <= a; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
