#include<stdio.h>
/**
* main - displays function type
*
* Return: 0
*/
int main(void)
{
int intType;
float floatType;
long longType;
unsigned long unsignedLongIntType;
char charType;
printf("size of int: %zu bytes\n", sizeof(intType));
printf("size of float: %zu bytes\n", sizeof(floatType));
printf("size of double: %zu bytes\n", sizeof(longType));
printf("size of long long int: %zu bytes\n", sizeof(unsignedLongIntType));
printf("size of char: %zu byte\n", sizeof(charType));

return (0);
}
