#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate n of src to dest
 * @dest: string
 * @src: string
 * @n: integer
 *
 *Return: returns a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
