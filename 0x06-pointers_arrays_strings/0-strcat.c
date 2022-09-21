#include "main.h"
#include <string.h>

/**
 * _strcat - concartenates two strings
 *
 * @dest: string
 * @src: string
 *
 * Return: returns dest new string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
