#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Nested Loop of three digits of numbers'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 8)
	{
		int b = a + 1;

	while (b < 9)
	{
		int c = b + 1;

	while (c < 10)
	{
		putchar('0' + a);
		putchar('0' + b);
		putchar('0' + c);
			if (a < 7 || b < 8 || c < 9)
			{
				putchar(',');
				putchar(' ');
			}
		c++;
	}
	b++;
	}
	a++;
	}
	putchar('\n');
	return (0);
}
