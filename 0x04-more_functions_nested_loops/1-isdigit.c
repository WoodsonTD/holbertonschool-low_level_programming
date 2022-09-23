#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checking for digit 0 - 9
 * @c: this is a variable
 * Return: Always 0
 */

int _isdigit(int c);
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
