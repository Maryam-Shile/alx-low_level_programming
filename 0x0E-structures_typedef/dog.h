#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: This struct has 3 members with
 * information about dogs
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
