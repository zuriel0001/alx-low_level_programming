#ifndef DOG_H
#define DOG_H

/*****   TASK 0 *****/
/**
 * struct dog - informations on a dog
 * @name: dog's name
 * @age: the dog's age
 * @owner: the dog owner's name
 *
 * Description: new type struct dog with basic info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/******* TASK 3 ********/
/**
 * dog_t - typedef for "struct dog" structure
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
