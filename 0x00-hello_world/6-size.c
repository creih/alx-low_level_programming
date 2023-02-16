#include <stdio.h>
/**
 * main of this task is 
 * under this comments
 */
int main(void)
{
	char character;
	
	printf("Size of a char: %c byte(s)\n", (unsigned)sizeof(character));
	int integer;
	
	printf("Size of an int: %d byte(s)\n", (unsigned)sizeof(integer));
	long long_int;
	
	printf("Size of a long int: %ld byte(s)\n", (unsigned)sizeof(long_int));
	long long longer_int;
	
	printf("Size of a long long int: %lld byte(s)\n", (unsigned)sizeof(longer_int));
	float decimal;
        
	printf("Size of a float: %f byte(s)\n", (unsigned)sizeof(decimal));
	return (0)

}

