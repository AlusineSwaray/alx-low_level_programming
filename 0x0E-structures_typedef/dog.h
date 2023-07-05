#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * u_int - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - A struct for info on dogs
 * @name: name tag
 * @age: age tag
 * @owner: owner tag
 *
 * Description: lorem ipsum
 */
struct dog
{
  char *name;
  float age;
  char *owner;
};

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcopy(char *dest, char *src);
int _strlen(const char *str);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
