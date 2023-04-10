#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character b to stdout
 * @b: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char b)
{
	return (write(1, &b, 1));

}
