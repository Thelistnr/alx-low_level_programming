#include "main.h"
/**
 * _islower - Check for lower case
 * @c: is char to be checked
 * Return: 0, 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
