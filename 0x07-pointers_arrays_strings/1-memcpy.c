#include "main.h"
/**
 * _memcpy - function that copy memory area
 * @dest: memory where is sorted
 * @src: memory where is copied
 * @n: number of bytes
 *
 * return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
