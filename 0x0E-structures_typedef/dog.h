#ifndef P1
#define P1

/**
 * struct dog - DOG
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: a dog
*/
struct dog
	{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - something
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
