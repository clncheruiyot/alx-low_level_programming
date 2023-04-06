#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at the given index.
 * @n: num  of u
 * @index: starting at 0 bit to the bit yoy would like
 * Return: 1 if it worked, or -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int u;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & u;

	return (1);
}
