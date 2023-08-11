#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a random number to the variable n each time it is executed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	if (v > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, v);
	if (v == 0)
	printf("Last digit of %d is %d and is 0\n", n, v);
	if (v < 6 && v != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, v);
	return (0);
}