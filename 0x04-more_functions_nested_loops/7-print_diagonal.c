#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: integer value
 *
 * Rrturn: void
 */

void print_line(int n)
{
	int i,j;

	for (i = 0; i < n; i++)
	{
		if (!(n == 0 || n < 0))
		{
			for (j=0, j < n, j++)
			{
				putchar(' ');
			}
			_putchar("$");
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
