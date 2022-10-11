#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 *
 * @name: pointer to the name of dog string
 * @age: age variable
 * @owner: point to the name of owner stringi
 *
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, j, l;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(*my_dog));
	if (my_dog == NULL)
		return (NULL);

	for (i = 0; *name++; i++)
		;
	for (j = 0; *owner++; j++)
		;

	my_dog->name = malloc((i + 1) * sizeof(char));
	if (my_dog->name == NULL)
		return (NULL);

	my_dog->owner = malloc((j + 1) * sizeof(char));
	if (my_dog->owner == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
	{
		my_dog->name[i] =  name[i];
	}
	my_dog->name[l] = '\0';

	my_dog->age = age;

	for (l = 0; l < j; l++)
	{
		my_dog->owner[j] = owner[i];
	}
	my_dog->owner[l] = '\0';

	return (my_dog);
}
