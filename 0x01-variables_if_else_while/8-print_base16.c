#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}


