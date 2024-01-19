#ifndef SEARCHING_ALGORITHMS
#define SEARCHING_ALGORITHMS

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - a singly linked list
 *
 * @n: Integer data type
 * @index: List node index
 * @next: Next node pointer
 *
 * Description: SLL Structure for Search algorithms
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - SLL with express lane
 *
 * @n: Integer data type
 * @index: List node index
 * @next: Next node pointer
 * @express: Pointer in the next node express lane
 *
 * Description: SLL node structure with express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif