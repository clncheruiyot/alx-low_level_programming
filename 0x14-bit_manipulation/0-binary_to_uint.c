#include "main.h"

/**
 * binary_to_uint -to converts a binary number to an unsigned int.
 * @b: pointing string of 0 and 1 chars
 *
 * Return:the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int c;

	c = 0;
	if (!b)
		return (0);
	for (u = 0; b[u] != '\0'; u++)
	{
		if (b[u] != '0' && b[u] != '1')
			return (0);
	}
	for (u = 0; b[u] != '\0'; u++)
	{
		c <<= 1;
		if (b[u] == '1')
			c += 1;
	}
	return (c);
}
