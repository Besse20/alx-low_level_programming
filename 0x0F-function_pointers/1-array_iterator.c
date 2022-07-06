#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - this function iterates an array
 * @array: the array to iterate
 * @size: the size of the array
 * @action: this a function pointer
 * Description: this fuction iterates an array
 * Return: this is a void function to return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
