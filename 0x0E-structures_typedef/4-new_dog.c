#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - nw
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pntr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->owner = malloc(sizeof(char) * 1000000);
	dog->name = malloc(sizeof(char) * 1000000);
	while (*name)
	{
		dog->name[i] = *name;
		i++;
		name++;
	}
	dog->name[i] = '\0';
	i = 0;
	while (*owner)
	{
		dog->owner[i] = *owner;
		i++;
		owner++;
	}
	dog->owner[i] = '\0';
	dog->age = age;
	return (dog);
}
