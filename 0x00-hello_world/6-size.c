#include<stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;

     /*sizeof evaluates the size of a variable*/
printf("Size of a char: %zu bytes\n", sizeof(charType),"(s)");
printf("Size of an int: %zu bytes\n", sizeof(intType),"(s)");
printf("Size of a long int: %zu bytes\n", sizeof(longType),"(s)");
printf("Size of a long long int: %zu byte\n", sizeof(doubleType),"(s)");
printf("Size of a float: %zu bytes\n", sizeof(floatType),"(s)");
    
    return 0;
}
