#include <stdio.h>
/**
 * fibonacci - Calculate the nth Fibonacci number recursively
 * @n: The index of the desired Fibonacci number
 *
 * Return: The nth Fibonacci number
 */
int fibonacci(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}
/**
 * main - Print the first 50 Fibonacci numbers
 *Return: 0
 */
int main(void)
{
	int fibonacci_sequence[50];
	int i;

	for (i = 0; i < 50; i++)
		fibonacci_sequence[i] = fibonacci(i);
	printf("%d", fibonacci_sequence[0]);
	for (i = 1; i < 50; i++)
		printf(", %d", fibonacci_sequence[i]);
	printf("\n");
	return (0);
}
