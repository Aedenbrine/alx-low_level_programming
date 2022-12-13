#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 *
 * @n: The interger for the number to be printed
 *
 * Return: 1 as a + if n is greater than zero
 * 0, if n is 0 otherwise, print -1 as a - if
 * n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
