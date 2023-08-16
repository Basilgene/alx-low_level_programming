#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @array: array of function
 * @size: size of array
 * @action: a pointer to function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
