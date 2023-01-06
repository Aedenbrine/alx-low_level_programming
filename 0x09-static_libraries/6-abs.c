#include "main.h"

/**
 * _abs - function
 * @r: instance to be checked
 * Description: This function returns the absolute value of an integer
 * Return: Absolute value of r
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
