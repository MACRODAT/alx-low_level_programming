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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - something
*/
typedef struct dog dog_t;

#endif
