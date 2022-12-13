#include <stdio.h>
#include "main.h"
/**
 * _islower - Check a lower case
 *
 * @c: character to be checked if it is lowercase
 *
 * Description: Check for lowercase
 *
 * 
 * Return: 1 if lowercase, 0, otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}

