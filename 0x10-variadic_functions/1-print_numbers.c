#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by newline
 * @separator: separator between numbers
 * @n: number of integers passed
 * Return: Nil
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int nums;

	va_start(ap, n);
	for (; i < n; i++)
	{
		nums = va_arg(ap, int);
		printf("%d", nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
