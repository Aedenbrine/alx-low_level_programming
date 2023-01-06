#include "main.h"

/**
 * _isupper - checks for an uppercase character
 *
 * @c: letter to be checked
 *
 * Return: 1 (if uppercase) 0 (otherwise)
 */

int _isupper(int c)
{
	char i;
	int upper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			upper = 1;
	}

	return (upper);
}
