#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Positive r Negative - print sign of random number
 * @void: empty parameter lsit for main.
 *
 * Description: this if/else statement declares the sign (positive
 * or negative) of a random number. It also stsates if the value
 * is zero
 *
 * Return: 0 for success
 */
/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
       				/* your code goes there */
				if (n > 0)
				{
					printf("%d is positive\n", n);
				}
				else if (n == 0)
				{
					printf("%d is zero\n", n);
				}
				else
				{
					printf("%d is negative\n", n);
				}
					return (0);
}
