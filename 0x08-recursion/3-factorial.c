#include "main.h"
/**
 * factorial - return the factorial of a number
 * @n: number to return factorial from
 * return: factorial of n
 */
int factoria(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
