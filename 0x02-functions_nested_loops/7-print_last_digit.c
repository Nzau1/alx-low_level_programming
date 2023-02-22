#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * Return: The value if the last digit.
 * @n: the number to be checked
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
