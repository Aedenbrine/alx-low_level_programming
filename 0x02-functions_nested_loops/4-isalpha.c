#include <stdio.h>
#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character
 *
 * @c: To check if it is letter, lowercase or uppercase
 *
 * Return: 1 if success, otherwise, 0
 */

int _isalpha(int c)
{
	if ((c <= 90) && (c >= 65))
	return (1);
	else if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
