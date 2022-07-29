#include "main.h"

/**
 * _strdup - function to duplicate string
 * @str: string to be duplicated
 * Return: null or a pointer to the duplicate string
 */
char *_strdup(char *str)
{
	int x = 1, y = 0;
	char *space;

	if (str == NULL)
		return (NULL);

	while (str[x])
		x++;

	space = (char *)malloc(x * sizeof(char) + 1);

	if (space == NULL)
		return (NULL);

	while (y < x)
	{
		s[y] = str[y];
		y++;
	}

	s[y] = '\0';

	return (space);
}
