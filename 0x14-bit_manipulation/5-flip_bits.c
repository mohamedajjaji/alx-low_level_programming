#include "main.h"

/**
 * flip_bits - Computes the number of bits that differ between two numbers.
 * @n: An unsigned long int.
 * @m: An unsigned long int.
 *
 * Return: The number of bits that need to be flipped to change n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int i = 0;

	while (xor_result != 0)
	{
		i += xor_result & 1;
		xor_result = xor_result >> 1;
	}

	return (i);
}
