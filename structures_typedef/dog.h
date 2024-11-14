#ifndef DOG_H
#define DOG_H
/**
 * dog - structure
 * @owner: propriétaire
 * @age: age du chien
 * @name: nom du chien
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
