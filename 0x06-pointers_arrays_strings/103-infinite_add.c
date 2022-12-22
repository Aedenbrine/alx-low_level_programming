#include "main.h"


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char first, second, *n1, *n2, sum;

	printf("%d%d", &first, &second);

	n1 = &first;
	n2 = &second;

	sum = *n1 + *n2;
	printf("sum of the numbers = %d\n", sum);
	return (0);
}
