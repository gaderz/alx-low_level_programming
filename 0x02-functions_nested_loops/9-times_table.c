#include "main.h"
/**
 * times_table - time table being printed in table format
 * Return: alwats success
 */
void times_table(void)
{
	int i, j, r, t, y;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		r = i * j;
		if (r < 9)
		{
			t = r % 10;
			y = (r - t) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(y + '0');
			_putchar(t + '0');
		}
		else
		{
			if (j != 0)
			{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			}
		_putchar(r + '0');
	}
	}
	_putchar('\n');
	}
}
