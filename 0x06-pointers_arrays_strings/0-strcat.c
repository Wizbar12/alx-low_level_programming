#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * return: void
 */
char _strcat(char *dest, char *src)
{
int m;
int w;

m = 0;
while (dest[m] != '\0')
{
	m++;
}
while (src[w] != '\0')
{
	dest[m] = src[w];
	m++;
	w++;
}
dest[m] = '\0';
return (dest);
}
