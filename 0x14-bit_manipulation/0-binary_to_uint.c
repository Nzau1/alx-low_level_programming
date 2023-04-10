#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @x: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *x)
{
	int b;
	unsigned int dec_val = 0;

	if (!x)
		return (0);

	for (b = 0; x[b]; b++)
	{
		if (x[b] < '0' || x[b] > '1')
			return (0);
		dec_val = 2 * dec_val + (x[b] - '0');
	}
	return (dec_val);
}
