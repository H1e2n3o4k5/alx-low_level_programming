#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: the value to modify
 * @to: the value to assign
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}

100 - set_string.c

#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: content is to copied
 * @to: string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
