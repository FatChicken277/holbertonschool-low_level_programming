#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - prints a struct dog.
 *@d: struct.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == 0)
			printf("(nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == 0)
			printf("(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
