
#include "main.h"
/**
 * print_times_table - print times table up to input
 *
 * Description: writes times table up to input not exceeding 15
 *
 * @n: size of time table 
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int y, x, prod;

	if (n <= 15 && n >= 0)
	{
		for(y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				prod = (y* x);
				if(x != 0)
				{
					putchar(',');
					putchar(' ');
				}
				if (prod < 10 && x != 0)
				{
					putchar(' ');
					putchar(' ');
					putchar((prod % 10) + '0');
				}
				else if (prod >= 100 && x != 0)
				{
					putchar((prod / 100) + '0');
					putchar(' ');
					putchar((prod % 10) + '0');
					
				}
				else if(prod >= 100 && x != '0')
				{
					putchar((prod / 10) + '0');
					putchar((prod / 100) % 10 + '0');
					putchar((prod % 10) + '0');
				}
				else
					putchar((prod % 10) + '0');
			}
			putchar('\n');
					

					
		}
	}
}
