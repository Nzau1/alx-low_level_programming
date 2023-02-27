#include "main.h"

/**
 * print_array - afunction that prints n element of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d,", a[i]);

	if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}