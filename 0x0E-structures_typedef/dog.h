<<<<<<< HEAD
=======
<<<<<<< HEAD
#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog
 * @name: atribute pointer to char name's dog
 * @age: atribute float age's dog
 * @owner: atribute pointer to char owner's dog
 */

=======
>>>>>>> master
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
<<<<<<< HEAD
=======
>>>>>>> 4b97fe2 (0. Poppy)
>>>>>>> master
struct dog
{
	char *name;
	float age;
	char *owner;
};

<<<<<<< HEAD
=======
<<<<<<< HEAD
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
=======
>>>>>>> master
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
<<<<<<< HEAD
=======
>>>>>>> 4b97fe2 (0. Poppy)
>>>>>>> master

#endif
