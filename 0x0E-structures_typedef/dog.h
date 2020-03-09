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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
