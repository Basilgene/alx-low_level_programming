#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for a function
 *@array: array to search
 *@size: size of array
 *@cmp: pointer to function
 *Return: 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) == 1)
			return (1);
	}
	return (-1);
}
