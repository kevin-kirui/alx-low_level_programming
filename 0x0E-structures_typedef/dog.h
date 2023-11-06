#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Dog details
  * @name: Name of the dog.
  * @age: Age of the dog.
  * @owner: Dogs owner.
  *
  * Description: Attributes of a dog.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
