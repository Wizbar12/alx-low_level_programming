#include "main.h"
/**
 * print_rev - imprime  and reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int longi = 0;
int o;

while (*s != '\0')
{
	longi++;
	s++;
}
{
_putchar(*s);
s--;
}
_putchar('\n');
}
