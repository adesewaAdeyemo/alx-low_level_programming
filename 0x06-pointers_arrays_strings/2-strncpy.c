#include "main.h"
#include <string.h>

/**
 * _strncpy - copies n length of src into dest
 *
 * @dest: string
 * @src: string
 * @n: integer
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
