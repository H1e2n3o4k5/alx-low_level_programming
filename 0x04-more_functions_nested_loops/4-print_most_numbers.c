#include "main.h"

/**
 * print_most_numbers - this print most numbers
 * Return: 0
 */
void print _most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}
