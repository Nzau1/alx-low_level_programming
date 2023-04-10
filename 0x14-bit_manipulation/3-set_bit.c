#include "main.h"

/**set_bit - sets a bit at agiven index to 1
 * @q: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *q, unsigned int index)
{
	if (index > 63)
		return (-1);

	*q = ((1UL << index) | *q);
	return (1);
}
