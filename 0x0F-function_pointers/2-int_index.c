#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - this function finds the index of an int
 * @array: the array to find the index
 * @size: the size of the array
 * @cmp: this a function pointer
 * Description: this function finds the index of an int
 * Return: this is a void function no return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[i]))
return (i);

i++;
}
}
}

return (-1);
}
