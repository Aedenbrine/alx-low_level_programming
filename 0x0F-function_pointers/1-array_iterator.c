#include <stdlib.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: pointer to an array
 * @size: size of the array
 * @action: action to iterate throwaway
 * Return: Nil
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
