#include "main.h"
#include <string.h>
/**
 * _strncoy - function that copies a string.
 * @dest: string to copy to
 * @src: string to be copied from
 * @n: intiger that determines number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	strncpy(dest, src, n);
	return (dest);
}
