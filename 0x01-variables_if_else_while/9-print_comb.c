#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all possible combinations of single digit number
 * Return: 0 (success)
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)

	{
		putchar(m);
		putchar(',');
		putchar(' ');
	}
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
