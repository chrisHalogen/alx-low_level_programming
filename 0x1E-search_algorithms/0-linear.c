#include "search_algos.h"

/**
 * linear_search - uses Linear search to find a
 * number in a list of integers
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int count;

	if (array == NULL)
		return (-1);

	for (count = 0; count < (int)size; count++)
	{
		printf("Value checked array[%u] = [%d]\n", count, array[count]);
		if (value == array[count])
			return (count);
	}
	return (-1);
}