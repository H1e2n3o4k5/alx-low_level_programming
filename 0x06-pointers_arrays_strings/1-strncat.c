#include "main.h"
/**
 * _strncat - like _strcat but it will use n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated until n limit
 * @n: number of bytes that will be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
i}
