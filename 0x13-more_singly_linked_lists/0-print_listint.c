#include "lists.h"

/**
 * print_listint - prints the elements in a linked list
 * @h: Pointer to the linked list.
 * Return: The number of Nodes
 **/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		_putchar(h->n);
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}
