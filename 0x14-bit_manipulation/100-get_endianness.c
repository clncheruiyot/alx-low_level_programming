#include "main.h"
/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int u;
	char *b;

	u = 1;
	b = (char *)&u;

	return (*b);
}
