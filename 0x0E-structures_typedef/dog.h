#ifndef DOG
#define DOG
/**
 * struct dog - struct dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Description: struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
