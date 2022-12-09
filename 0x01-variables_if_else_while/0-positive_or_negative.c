#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Positive or Negative - print sign of random number
 * @void: Empty parameter list for main.
 *
 * Description: this if/else statement declares the sign (Posititve
 * or Negative) of a random number. It also states if the value
 * is zero.
 *
 * Return: 0 for success
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n = 0)
				{
			                 printf("%d is zero\n", n);
				}
				else (n < 0)
				{
					printf("%d is negative\n", n);
				}
				
					return (0);

}
