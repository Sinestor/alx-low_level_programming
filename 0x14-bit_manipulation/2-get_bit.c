#include "main.h"

/**
 * get_bit - this returns the value of a bit at an index in a decimal number
 * @n: the number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);

	bitvalue = (n >> index) & 1;

	return (bitvalue);
}

