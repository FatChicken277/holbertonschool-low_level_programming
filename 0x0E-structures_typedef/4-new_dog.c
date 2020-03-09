#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog.
 *@name: pointer to dog name.
 *@age: dog age.
 *@owner: pointer to dog owner name.
 *Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	ndog->name = malloc(sizeof(char) * i + 1);
	if (ndog->name == 0)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		;
	ndog->owner = malloc(sizeof(char) * i + 1);
	if (ndog->owner == NULL)
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
