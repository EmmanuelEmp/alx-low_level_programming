#include "main.h"

/**
 * _salpha - Return 1 if c is a letter. lowercase or uppercase
 * @c: The in to print
 * Return 0.
 */

int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
