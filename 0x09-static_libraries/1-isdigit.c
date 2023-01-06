#include "main.h"

/**
 * _isdigit - checks if input is a digit
 *
 * @c: Instance to be checked
 *
 * Return: 1 (if digit) 0 (otherwise)
 */

int _isdigit(int c)
{
	char i = '0';
	int digit = 0;

	for (; i <= '9'; i++)
	{
		if (c == i)
		{
			digit = 1;
			break;
		}
	}

	return (digit);
}
