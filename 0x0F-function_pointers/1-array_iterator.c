#include "function_pointers.h"

/**
 * array-iterator: executs a function as a parameter on each element of an array.
 * @size: size of array
 * @i: iteration counter
 * @action: function pointer
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
