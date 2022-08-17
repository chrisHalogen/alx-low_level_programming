#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements in a linked list
 * @h: Pointer to the linked list.
 * Return: The number of Nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *sll;
	unsigned int count = 0;

	sll = h;
	while (sll)
	{
		printf("%d\n", sll->n);
		count++;
		sll = sll->next;
	}

	return (count);
}
