#ifndef DOG_FILE
#define DOG_FILE

/**
 * struct dog - a new type
 * @name: name
 * @age: the dog age
 * @owner: name of dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_FILE */
