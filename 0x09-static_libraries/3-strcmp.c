#include "main.h"

/**
 * _strcmp - Function which compare two strings
 * @s1: firist string
 * @s2: second string
 * Return: return zero if s1 == s2, return negative number if s1 < s2,
 * return positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
