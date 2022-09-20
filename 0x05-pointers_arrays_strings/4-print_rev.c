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
	int i;
	{
		for (i = _strlen(s); i >= 0; i--)
		{
			_putchar(s[i] + 0);
		}
		_putchar('\n');
	}
}
