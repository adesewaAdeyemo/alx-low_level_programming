#include "main.h"

/**
 * _strcat - to concatenate strings
 * @dest: string
 * @src: string
 *
 * Return: returns concartenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	j = 0;

	while(dest[j])
	{
		j++;
	}
	for (i = 0; i != '\0'; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
