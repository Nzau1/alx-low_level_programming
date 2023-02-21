#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * Return: The value if the last digit.
 * @n: the number to be checked
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (0);
}
