#include <stdlib.h>
#include "dog.h"

/**
 * len - pe
 * @s: str
 *
 * Return: lenth
 */
int len(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i+2);
}


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
	int l1, l2;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	l1 = len(name);
	l2 = len(owner);
	dog->name = malloc(sizeof(char) * l1);
	dog->owner = malloc(sizeof(char) * l2);
	if ((!dog->name) || !dog->owner)
		return (NULL);
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
