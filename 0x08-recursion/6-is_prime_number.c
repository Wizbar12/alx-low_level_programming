#include "main.h"

int actual_prime(int m, int i);

/**
 * is_prime_number - say if an integer is a prime number or not
 * @m: number to evaluate
 *
 * return: 1 if is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (actual_prime(n, m - 1));
}

/**
 * actual_prime - calculate if a number is a prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * return: 1 if m is prime, 0 if not
 */
int actual_prime(int m, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
