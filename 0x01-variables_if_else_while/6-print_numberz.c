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
		putchar('%d');
	putchar('\n');
	return (0);
}
