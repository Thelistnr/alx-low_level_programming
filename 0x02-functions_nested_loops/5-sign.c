#include "main.h"
/**
 * print_sign -Check for negative, positive, and zero
 * @n: char to be checked
 * Return: 0, 1, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
