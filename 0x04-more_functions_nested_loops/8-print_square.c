#include "main.h"
/**
 * void print_square - printing the size of a square
 * @size: number of square to be printed
 * Return: Always success
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i < size; i++)
	{
		_putchar('#');
		for (j = 2; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
