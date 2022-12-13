#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - Print the alphabet in lowercase with a new line
 * @void: void parameter list for print alphabet
 *
 * Descriptiom: Print alophabet in lowercase with new line
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
