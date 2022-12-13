#include "main.h"
/**
 * jack_bauer - Prints all minute of the day
 * @void: Paramters to add
 *
 */

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar((hr / 10) + '0');
			putchar((hr % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar('\n');
		}
	}
}
