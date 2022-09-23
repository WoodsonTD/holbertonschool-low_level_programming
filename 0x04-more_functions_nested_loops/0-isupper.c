#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check for uppercase character
 * @c: character to check
 * Return: Always 0
 */

int _isupper(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
