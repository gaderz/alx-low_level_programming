#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry function
 * @array: a pointer to the first element of the array to be processed
 * @size: the number of elements in the array
 * @action: a pointer to the function
 * to be executed on each element of the array
 * Return: Success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
