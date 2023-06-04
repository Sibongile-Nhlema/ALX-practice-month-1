#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -  prints last number stored in n
 * @n: int
 * @return int/ always 0 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    a = n % 10;
	/* your code goes there */
    if (a > 5)
        printf("Last digit of %d is %d and is greater than 5", n, a);
    else if (a == 0)
        printf("Last digit of %d is %d and is 0", n, a);
    else if (a < 6 && a != 0)
        printf("last digit of %d is %d and is less than 6 and not 0", n, a)
	return (0);
}