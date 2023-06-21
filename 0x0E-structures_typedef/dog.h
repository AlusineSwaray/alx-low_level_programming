#ifndef DOG_H
#define DOG_H

/**
 * u_int - Typedef for struct dog
 */
typedef struct dog_t;

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

#endif
