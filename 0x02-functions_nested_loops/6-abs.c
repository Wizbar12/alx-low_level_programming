#include "main.h"

/**
 * _abs - compute absolute value of an integer.
 * @c: compute the number
 *return: absolute value of the number or zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
