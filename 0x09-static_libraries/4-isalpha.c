#include "main.h"
/**
 * _isalpha - checks if c is letter, upper or lowercase
 *
 * @c: instance to be checked
 *
 * Return: 1 (if c is letter, upper or lowercase) 0 (otherwise)
 */

int _isalpha(int c)
{
	char lower, upper;
	int isLetter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isLetter = 1;
		}
	}

	return (isLetter);
}
