#include "main.h"
/**
 * _isdigit -cheker if the number is 0 to 9
 * @c: input number
 * Return: 1 if is a number () to 9), 0 in other case
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
