#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, mask = 0;

	/* Find the highest set bit in n */
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
			break;
	}

	/* Print the binary representation */
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			mask++;
		}
		else
		{
			_putchar('0');
		}
	}

	/* If n was 0, print a single 0 */
	if (count == 0)
	{
		_putchar('0');
	}
}
