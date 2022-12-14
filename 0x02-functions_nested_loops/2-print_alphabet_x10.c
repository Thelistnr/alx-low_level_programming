#include "main.h"
/**
 *print_alphabet_x10 - Print alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char l;
	int n = 0;

	while (n < 10)
	{
		n++;
		_putchar('\n');
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
	}
}
