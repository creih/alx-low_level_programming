#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - some specifics about a dog
 * @name: name of the dog
 * @owner: the perso the dog can be traced back to.
 * @age: age of that dog
 * Description: these are info on a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
#endif
