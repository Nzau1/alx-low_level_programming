#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints alphabets in lowercase in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}


