#include <stdio.h>

/**
 * main - print upper and lower
 * Return: Always 0
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /*print uppercase A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
