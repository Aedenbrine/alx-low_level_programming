#include "main.h"
/**
 * times_table - prints times table up to 9
 *
 * Return: void
 * @void: Paramter to be used
 */

void times_table(void)
{
	int y, z, prod;
	prod = 0;
	for (x = 0; x <= 9; x++)
	{
		prod = y * z;
		if (x != 0)
		{
			putchar(',');
			putchar(' ');
		}
		if (prod >= 10)
		{
			puchar((prod / 10) + '0');
			putchar((prod % 10) + '0');
		}
		else if (prod < 10) && (x != 0)
		{
			putchar(' ');
			putchar((prod % 10) + '0');
		}
		else 
		{
			putchar((prod % 10) + '0');
		}
		putchar('\n');
	}
}
