/*
 * File_name: 102-interpolation.c
 * Task_no: 9
 * Task_Title: Interpolation search
 *
 * Functions: int interpolation_search(int *array, size_t size, int value);
 * Created: On March 13, 2024
 * Author: Bereket Dereje Mekonnen
 *
 * GitHub repository: alx-low_level_programming
 * Project Title: 0x1E. C - Search Algorithms
 * Directory: 0x1E-search_algorithms
 */

#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array
 *                       of integers using the Interpolation
 *                       search algorithm
 *
 * Author: Bereket Dereje Mekonnen
 *
 * @array: input array
 *
 * @size: size of the array
 *
 * @value: value to search in
 *
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
