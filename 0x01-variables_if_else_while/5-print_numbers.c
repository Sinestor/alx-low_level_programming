#include <stdio.h>

/**
 * main - This prints only numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		printf("%d", c);
	}
	putchar('\n');
	return (0);
}

