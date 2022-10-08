#include "sort.h"
/**
 * selection_sort - sorts an array of integer data in ascending order
 * @array: data array
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i, index;
	int temp, current, min;

	if (!array[1])
		return;
	for (j = 0; j < size - 1; j++)
	{
		i = j;
		min = array[j];
		while (i < size)
		{
			current = array[i];
			if (current < min)
			{
				index = i;
				min = array[index];
				i++;
			}
			else
				i++;
		}
		if (index)
		{
			temp = array[j];
			array[j] = min;
			array[index] = temp;
			print_array(array, size);
		}
		index = 0;
	}
}