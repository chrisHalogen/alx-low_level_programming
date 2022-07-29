#include "main.h"

/**
 * create_array : Function to create array
 * @size: size of array to be created
 * @c: character to initialize array values
 * Return: NULL or  a pointer to the final array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *reserved_space;

	if (size == 0)
		return (NULL);

	reserved_space = (char *)malloc(size * sizeof(char));

	if (reserved_space == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		reserved_space[count] = c;

	return (reserved_space);
}
