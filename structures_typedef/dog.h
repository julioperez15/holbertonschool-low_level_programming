#include <stdio.h>
/**
 * struct dog my_dogi - a user defined data type.
 * @name : the user name
 * @age : user age
 * @owner : the owner
 *
 * Return : 0
 */
struct dog
{
  char *name;
  float age;
  char *owner;
};

/**
 * dog_t - Typedef struct dog
 */

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
