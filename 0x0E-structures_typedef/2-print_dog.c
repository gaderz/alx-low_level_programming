#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the elements of a dog struct
 * @d: pointer to dog struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age ? d->age : 0.0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
