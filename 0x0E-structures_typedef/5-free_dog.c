#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
