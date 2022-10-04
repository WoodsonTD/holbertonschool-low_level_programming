#include "main.h"
#include "_strchr.c"

/**
 * _strspn - returns number of bytes to s only of bytes from accept
 * @s: string
 * @accept: string
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

	int i = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (i);
	while (*s && _strchr(accept, *s++))
	{
		i++;
	}
	return (i);
}
