#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Writes 00-99
 * @void: Empty paramter list for main.
 *
 * Description: Writes all unique combinations
 * of 2 number
 *
 * Return 0 for success
 */
int main(void)
{
	int n, m;

	for(n = 48; n<= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if  (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar{','};
					putchar{' '};
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
