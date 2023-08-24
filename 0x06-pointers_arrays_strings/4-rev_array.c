#include "main.h"
/**
 * reverse_array - reverse array of the integers
 * @a: array
 * @n: number elements of the array
 * return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
{
	t = a[i];
	a[i] = a[n];
	a[n] = t;
}

}
