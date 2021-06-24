#include <stdio.h>
#include <math.h>

/**
* main - Prints the largest prime factor of the number 612852475143
*
* Return: Always 0 (Success)
*/
int main(void)
{
long int num;
int maxPrime;
int oddPrime;
num = 612852475143;
maxPrime = 0;
oddPrime = 3;

while (num % 2 == 0)
{
maxPrime = 2;
num /= 2;
}
while (num != 1)
{
while (num % oddPrime == 0)
{
maxPrime = oddPrime;
num /= oddPrime;
}
oddPrime += 2;
}
printf("%d\n", maxPrime);
return (0);
}
