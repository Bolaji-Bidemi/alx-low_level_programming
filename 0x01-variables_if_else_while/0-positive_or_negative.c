#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* main - prints number and if positive, negative or zero */
/* betty style doc for function main goes there */
/**
* main - prints number and if positive, negative or zero
* n:  integers
*
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d, positve", n);
}
else
{
if (n < 0)
printf("%d, negative", n);
}
else
{
if (n == 0)
printf("$d, is zero", n);
}
else
{
printf("invalid number");
return (0);
}
