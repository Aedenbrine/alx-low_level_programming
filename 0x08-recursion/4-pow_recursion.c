#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: value to be raised
 * @y: power to raise value to
 * Return: new value of x
 */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	if (y % 2 == 0)
	{
		if (y == 2)
			return (x * x);
		return (_pow_recursion(_pow_recursion(x, y / 2), 2));
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
