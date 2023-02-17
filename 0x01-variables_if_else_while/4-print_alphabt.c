#include <stdlip.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program that prints alphabet in lowercase except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar (la);
	}

	putchar('\n');

	return (0);
