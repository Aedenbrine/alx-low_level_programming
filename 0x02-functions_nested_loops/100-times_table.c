
#include "main.h"
/**
 * print_times_table - print times table up to input
 *
 * Description: writes times table up to input not exceeding 15
 *
 * @void: size of time table 
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;

			if (j == 0)
			{
				putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(k + '0');
			}
			else if (k >= 10)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(k + '0');
			}
		}
	}
	putchar('\n');
}
