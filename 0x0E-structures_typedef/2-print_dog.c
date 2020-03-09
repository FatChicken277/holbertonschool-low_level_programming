#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - prints a struct dog.
 *@d: struct.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	if (d->name == 0)
		printf("(nil)");
	else
	printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("(nil)");
	else
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("(nil)");
	else
	printf("Name: %s\n", d->owner);
}
