#include "main.h"
/**
 * print_rev -This function prints a reverse string
 * @s:This is input string
 */
void print_rev(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	for (index = index - 1; index >= 0; index--)
	{
		_putchar (s[index]);
	}
	_putchar ('\n');
}
