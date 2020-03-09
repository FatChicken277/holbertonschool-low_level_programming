#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (0);
	}

	for (i = 0; name[i] != '\0'; i++);
	ndog->name = malloc(sizeof(char) * i + 1);
	if (ndog->name == 0)
	{
		free(ndog);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++);
        ndog->owner = malloc(sizeof(char) * i + 1);
	if (ndog->owner == 0)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

        for (i = 0; name[i] != '\0'; i++)
	{
		ndog->name[i] = name[i];
	}
        ndog->name[i] = name[i];

	for (i = 0; owner[i] != '\0'; i++)
	{
		ndog->owner[i] = owner[i];
	}

        ndog->age = age;

	return (ndog);
}
