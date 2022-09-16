#include "main.h"

/**
 * print_square - Draws a square on the terminal.
 *
 * @size: integer value
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
	for (i=0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar("#");
		}
		putchar('\n');
	}
	}
	else
	{
		break;
	}
}
