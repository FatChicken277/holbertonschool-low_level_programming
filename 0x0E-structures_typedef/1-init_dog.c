#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - initialize a variable of type struct dog.
 *@d: struct.
 *@name: pointer to string name.
 *@age: age.
 *@owner: pointer to string owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		d = malloc(sizeof(struct dog));
		if (d == 0)
		{
			return;
		}
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
