#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
