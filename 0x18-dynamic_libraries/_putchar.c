#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to the console
 * @c: The character to output
 *
 * Return: On success 1 and -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
