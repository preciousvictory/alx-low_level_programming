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
	int i, j, l;

	dog_t *my_dog;


	my_dog = malloc(sizeof(my_dog));
	if (my_dog == NULL || owner == NULL || name == NULL)
		{
			free(my_dog);
			return (NULL);
		}

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[i]; j++)
		;

	my_dog->name = malloc((i + 1) * sizeof(char));
	my_dog->owner= malloc((j + 1) * sizeof(char));

	if (my_dog->name == NULL || my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	
	l = 0;
	while (l < i)
	{
		my_dog->name[i] =  name[i];
		l++;
	}
	my_dog->name[i] = '\0';

	
	l = 0;
	while (l < j)
	{
		my_dog->owner[j] = owner[i];
		l++;
	}
	my_dog->owner[j] = '\0';

	my_dog->age = age;

	return my_dog;
}
