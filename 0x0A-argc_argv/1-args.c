#include <stdio.h>
/**
 * main - function to print the number of args
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
