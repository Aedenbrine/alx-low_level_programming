#include "main.h"

/**
 * _islower -  checks for a lowercase character
 *
 * @c: letter to be checked
 *
 * Return: 1 (if c is lowercase) 0 (otherwise)
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
