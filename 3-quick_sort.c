#include "sort.h"
#include <stddef.h>
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: unsorted array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t j, k;
	int temp;

	j = 0;
	for (k = size - 1; k > 0; k--)
	{
		if (array[k] < array[j])
		{
			temp = array[j];
			array[j] = array[k];
			array[k] = temp;
			for (j = j + 1; j < k; j++)
			{
				if (array[j] > array[k])
				{
					temp = array[j];
					array[k] = array[j];
					array[j] = temp;
					quick_sort(array, k);
				}
			}
		}
	}
	
}
