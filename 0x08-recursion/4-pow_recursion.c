#include "main.h"

/**
 * _pow_recursion - return the value of x raise to
 * the power of y.
 * @x: value that is raised to the power of y.
 * @y: The power that is raised.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
