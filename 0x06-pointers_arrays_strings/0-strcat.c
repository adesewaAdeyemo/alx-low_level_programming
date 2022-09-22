#include "main.h"
#include <string.h>

/**
 * _strcat - to concatenate strings
 * @dest: string
 * @src: string
 *
 * Return: returns concartenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i=0; i != '\0'; i++)
	{
		dest += src[i];
	}
	return (dest);
}
