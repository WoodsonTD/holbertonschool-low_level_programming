#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check for uppercase character
 *
 * Return: Always 0
 */

int _isupper(int c);
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
