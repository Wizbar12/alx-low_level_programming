#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**sqrt_recursion - returns the natural square root of a number
 * @n: number to be calculated the square root of
 *
 * return: the results of square root
 */
int sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural squaare root of a number
 * @n: number to be caculated square root of
 * @i: iterator
 *
 * return: results of square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (n * i > n)
		return (-1);
	if (n * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
