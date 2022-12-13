#include <stdio.h>
/**
 * main - Print numbers with putchar
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
