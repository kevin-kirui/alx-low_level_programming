#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
int main(void)
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;
/* your code goes there */
if(n > 0)
{
  printf("%d is positive", n);
}else if(n < 0){
  printf("%d is negative", n);
}else("%d is zero", n);
	return (0);
}
