#include <stdio.h>
/**
 * main - Prints upper and lower case alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
	return (0);
}


