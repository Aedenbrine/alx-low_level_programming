#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: size of an array
 * @cmp: cmp to compare the elements to throw away
 * Return: first index for which the cmp func doesnn't return 0
 * -1 if no elements match or size <0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
