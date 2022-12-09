#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * @void:Empty parameter list for main
 *
 * Return 0 for success
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if  (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
