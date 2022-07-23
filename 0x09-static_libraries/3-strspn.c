#include "main.h"
/**
 * _strspn - searching a string for a set of bytes
 * @s: source string
 * @accept: accepted strin
 * Return: number of bytes in the int segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}