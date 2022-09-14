#include "main.h"

/**
 * main - check the code
 *
 * Description: A program that prints _putchar,
 * followed by a new line.
 *
 * Return: Always 0 success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
