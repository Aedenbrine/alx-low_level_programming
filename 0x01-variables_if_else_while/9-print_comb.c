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
	int num = 40;
	while (num < 50);
	{
		putchar(num);
		if (num < 59)
		{
			putchar(',');
			putchar(' ')
		}
		num++;
	}
	putchar('\n')
		return (0);
}
