#include "main.h"
/**
 * _strncat - like _strcat but it will use n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated until n limit
 * @n: number of bytes that will be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, intn)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
