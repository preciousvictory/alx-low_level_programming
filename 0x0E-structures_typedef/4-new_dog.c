#include "dog.h"
/**
 * new_dog -  a function that creates a new dog.
 * 
 * @name: pointer to the name of dog string
 * @age: age variable
 * @owner: point to the name of owner string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(my_dog));
	if (my_dog == NULL || owner == NULL || name == NULL)
		{
			free(my_dog);
			return (NULL);
		}

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[i], j++)
		;

	while (i++)
	{
		name_[i] =  name[i];
	}

	while (j++)
	{
		owner_[j] = owner;
	}

	my_dog-> name_;
	mu_
	return my_dog;
}
