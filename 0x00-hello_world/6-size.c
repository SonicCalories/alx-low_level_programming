#include <stdio.h>
int main()
{
char charType;    
int intType;
long longType;
long long longlongType;
float floatType;

    

    // Sizeof operator is used to evaluate the size of a variable
printf("Size of a char: %ld byte\n",sizeof(charType));    
printf("Size of an int: %ld bytes\n",sizeof(intType));
printf("Size of a long int: %ld bytes\n",sizeof(longType));    
printf("Size of a long long int: %ld bytes\n",sizeof(longlongType));    
printf("Size of a float: %ld bytes\n",sizeof(floatType));

    return 0;
}
