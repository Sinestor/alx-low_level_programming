#include <stdio.h>
/**
 * main -  A program that prints the size of various types on the computer it is compiled
 * Return: 0 (Success)
 */
int main(void)
{
	char b;
	int c;
	long int d;
	long long int e;
	float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
