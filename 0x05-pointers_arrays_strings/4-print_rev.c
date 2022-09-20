#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s : string parameter to print
 *
 * Return: void
*/
void print_rev(char *s)
{
	int i, j;

	if (s[i] == '\0')
	{
		for (j = i - 1; j >= 0; i--)
		{
			_putchar(s[j] + 0);
		}
		_putchar('\n');
	}
}
