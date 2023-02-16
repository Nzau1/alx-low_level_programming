#include <stdio.h>
/**
 * main -  program that prints the size of various types
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

Printf("\nSize of a char:%lu byte(s)", sizeof(a));
Printf("\nSize of an int:%lu byte(s)", sizeof(b));
Printf("\nSize of a long int:%lu byte(s)", sizeof(c));
Printf("\nSize of a long long int:%lu byte(s)", sizeof(d));
Printf("\nSize of a float:%lu byte(s)", sizeof(f));
return (0);
}
