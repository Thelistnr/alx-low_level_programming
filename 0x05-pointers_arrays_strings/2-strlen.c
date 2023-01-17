#include "main.h"
/**
 * _strlen - Return the length of string
 * @s: char
 * Return: 0;
 */
int _strlen(char *s)
{
	int a = 0; /* Start counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
