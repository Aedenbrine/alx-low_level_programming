#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - writes 0-9
 * @void: Empty parameter lsit for sale.
 *
 * Description: writes 0-9 with comma and space
 *
 * Return: 0 for success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
       	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
		return (0);
}
