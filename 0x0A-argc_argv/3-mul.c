#include <stdio.h>
/**
 * main - function to multiply 2 numbers
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int count, result = 1;

	for (count = 1; count < argc; count++)
	{
		result *= atoi(argv[count]);
	}
	printf("%d\n", result);

	return (0);
}
