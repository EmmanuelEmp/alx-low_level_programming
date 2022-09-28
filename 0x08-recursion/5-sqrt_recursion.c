#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @a: iterator.
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
int power_operation(int n, int a)
{
return (square(n, 1));
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + power_operation(n, a + 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 * _sqrt_recursion - returns natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int square(int n, int val)
{

if (val * val == n)
	return (val);
else if (val * val < n)
	return  (square(n, val + 1));
else
	return (-1);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
