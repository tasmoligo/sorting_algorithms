#include "sort.h"
/**
  * bubble_sort - sorts an array of integers in ascending
  * order using the Bubble sort algorithm
  * @array: the array to print
  * @size: the size of the array
  * Return: Nothng
  */
void bubble_sort(int *array, size_t size)
{
	int i, temp, boundary, s = size;

	if (size == 0 || size == 1)
		return;
	for (i = 0; i < s; i++)
	{
		boundary = 0;
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			boundary = 1;
			print_array(array, size);
		}
		if (i == s - 2)
		{
			if (boundary == 0)
				break;
			s--;
			i = -1;
		}
	}
}
