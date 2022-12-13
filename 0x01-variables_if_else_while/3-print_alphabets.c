#include <stdio.h>
/**
 * main - Print alphabet plus caps
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		printf('\n', letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar('\n', letter);
	return (0);
}
