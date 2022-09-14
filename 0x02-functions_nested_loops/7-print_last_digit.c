#include "main.h"
/**
 * print_last_digit - check code
 * @n: It prints ou the last digit of a num input
 *
 *Return: value of i
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i *= -1;
	}

	_putchar(i + '0');

	return (i);
}
