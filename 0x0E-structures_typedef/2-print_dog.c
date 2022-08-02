#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a dog structure entered
 * @d: pointer to the dog structure
 */

void print_dog(struct dog *d)
{
	if (d != null)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);

		printf("Age: %d", d->age);

		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);

	}
}
