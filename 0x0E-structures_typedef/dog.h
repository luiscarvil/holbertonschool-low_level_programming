#ifndef DOG
#define DOG
/**
 *struct dog - structur django.
 *@name: name dog.
 *@age: age dog.
 *@owner: owner dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
