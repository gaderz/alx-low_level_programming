#include <stdio.h>
/**
 * main - Entry point
 * Description: 'combination of two two digits'
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int a = 0, b;

	while (a <= 99)
	{
		b = a;

		while (b <= 99)
		{
			int num_1 = a / 10;

			int unit_1 = a % 10;

			int num_2 = b / 10;

			int unit_2 = b % 10;

			putchar(num_1 + '0');
			putchar(unit_1 + '0');
			putchar(' ');
			putchar(num_2 + '0');
			putchar(unit_2 + '0');

			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
