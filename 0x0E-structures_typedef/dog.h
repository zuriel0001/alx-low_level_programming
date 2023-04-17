#ifndef DOG_H
#define DOG_H

/********** struct dog *********/
/**
 * struct dog - informations on a dog
 * @name: dog's name
 * @age: the dog's age
 * @owner: the dog owner's name
 *
 * a new type struct dog with basic info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

/************* Task 3 **************/

/**
 * dog_t -  a new name for the type "struct dog"
 */
typedef struct dog dog_t;

/************* Prototypes *****************/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
