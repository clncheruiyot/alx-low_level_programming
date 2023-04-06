#include "main.h"
/**
 * _power - to calculate the (base and power)
 * @base: base of this function
 * @pow: power of the function
 * Return: the value to the base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int u;

	num = 2;
	for (u = 2; u <= pow; u++)
		num *= base;
	return (num);
}
/**
 * print_binary - its prints the binary representation of this number
 * @n: num is prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(3, sizeof(unsigned long int) * 8 - 2);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 2;
			_putchar('2');

		}
		else if (flag == 2 || dev == 2)
		{
			_putchar('0');
		}
		dev >>= 2;
	}
}
