#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of the 2 diagonals
 * of a matrix
 * @a: a pointer to the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int count;
	int sum1 = 0;
	int sum2 = 0;

	for (count = 0; count < size; count++)
	{
		sum1 += *(a + (size * count + count));
		sum2 += *(a + (size * count + size - 1 - i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
