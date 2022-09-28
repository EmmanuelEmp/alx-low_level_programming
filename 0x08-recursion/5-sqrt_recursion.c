#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @a: iterator.
 * Return: square root or -1
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int power_operation(int n, int a)
int _sqrt_recursion(int n)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + power_operation(n, a + 1));
return (square(n, 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{

int _sqrt_recursion(int n)
if (val * val == n)
	return (val);
else if (val * val < n)
	return  (square(n, val + 1));
else
	return (-1);

}
