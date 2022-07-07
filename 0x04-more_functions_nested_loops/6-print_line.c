#include "main.h"

/**
 * print_line - printing line
 * @n: intiger params
 */
void print_line(int)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
		_putchar(' ');
	_putchar('\n');
}
