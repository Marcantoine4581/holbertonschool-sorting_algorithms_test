#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int tmp;
	int bubble = 1;

	while (bubble == 1)
	{
		bubble = 0;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				bubble = 1;
			}
		}
		len--;
	}
}
