#include "main.h"

/**
 * _puts - prints out a string to terminal
 * @s: string to printed
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
