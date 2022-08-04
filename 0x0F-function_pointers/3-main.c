#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: number of argumants
 * @argv: string of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	o = get_op_func(argv[2]);

	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	z = o(a, b);

	printf("%d\n", z);

	return (0);
}
