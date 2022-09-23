#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: input
 * @n: int
 *
 * Return void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[1];
		a[i++] = a[n];
		a[n] = aux;
	}
}
