#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in decimal number
 * @t: number to search
 * @index: index of the bit
 *
 * Return: value of the  bit
 */
int get_bit(unsigned long int t, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (t >> index) & 1;

	return (bit_val);
}
