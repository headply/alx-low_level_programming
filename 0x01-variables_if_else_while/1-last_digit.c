#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - program will assign a random number
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d and is greater than 5", n);
	else if (n < 6 != 0)
		printf("Last digit of %d and is less than 6 and not 0", n);
	else
		printf("Last digit of %i and is 0", n);
	return (0);
}
