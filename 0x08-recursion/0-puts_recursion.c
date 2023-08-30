#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: an input
 * Return: 0 Always
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s++);
	}
	else
		_putchar('\n');
}
