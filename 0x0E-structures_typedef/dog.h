#ifndef DOG_H
#define DOG_H

/*
 * struct dog - dog basic infor
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 */

struct
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
