#include <stdio.h>
#include "main.h"

int _sqrt_helper(int n, int low, int high);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: If n has a natural square root, return the square root.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
/**
 * _sqrt_helper - Recursive helper function for _sqrt_recursion.
 * @n: The number to compute the square root of.
 * @low: The lowest possible square root of n.
 * @high: The highest possible square root of n.
 *
 * Return: If n has a natural square root, return the square root.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (low > high)
	{
		return (-1);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
}
