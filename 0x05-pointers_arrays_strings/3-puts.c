#include "main.h"
/**
 * _put - print a string followed by a new line
 *
 * @str: the string tp print
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
