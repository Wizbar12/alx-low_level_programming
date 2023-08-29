#include "main.h"
/**
 * _strchr - locates a charactor in a string.
 * @s: string to be searched.
 * @c: charactor to be located.
 *
 * return: if c is found - a pointer to the first occurence.
 * if c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index]== c)
			return (s + index);
	}
	return ('\0');
}
