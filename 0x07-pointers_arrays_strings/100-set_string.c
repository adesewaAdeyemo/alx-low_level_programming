#include "main.h"
#include <string.h>
/**
 * set_string - sets value of s to to
 * @s: string
 * @to: string
 */

void set_string(char **s, char *to)
{
	strcpy(*s, to);
}
