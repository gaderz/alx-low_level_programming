#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all possible digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		int number_2 = number + 1;

		while (number_2 < 10)
		{
			putchar(number + '0');
			putchar(',');
			putchar(' ');
			putchar(number_2 + '0');
			putchar(' ');

			number_2++;
		}
		number++;
	}
	return (0);
}
