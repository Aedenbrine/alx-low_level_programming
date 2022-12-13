#include <stdio.h>
/**
 * print_alphabet - Print lowercase alphabet
 *
 */

void print_alhabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar();
	}
}

/**
 * print_alphabet_x10 - Print the lowercase pf the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		print_alphabet();
	}
}
