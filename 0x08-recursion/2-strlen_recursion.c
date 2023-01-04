#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to be counted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
