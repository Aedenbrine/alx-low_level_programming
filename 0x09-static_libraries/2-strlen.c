#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string to be checked
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
