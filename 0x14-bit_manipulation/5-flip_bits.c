#include "main.h"
/**
 * flip_bits - flip to go from one number to another.
 * @n: first number
 * @m: second number
 * Return: bits in numbers you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int r, u;

	r = 0;
	result = 1;
	differnce = n ^ m;
	for (u = 0; u < (sizeof(unsigned long int) * 8); u++)
	{
		if (result == (differnce & result))
			r++;
		result <<= 1;
	}

	return (r);
}
