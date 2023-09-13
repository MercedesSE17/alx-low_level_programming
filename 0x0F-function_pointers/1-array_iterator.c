#include <function_pointers.h>
#include <stdio.h>

/**
 * @array_iterator - executes function on array
 * @array - points to an array
 * @size - size of the array
 * @action -pointer to the function 
 * return : nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
