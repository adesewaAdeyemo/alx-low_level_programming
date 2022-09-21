#include "main.h"
#include <string.h>


int main(void)
{
	char a[98]  = "hello";
	char b[] = "world!";
	char *ptr;

	ptr = _strncpy(a, b, 1);
	printf("%s\n", ptr);
	ptr = _strncpy(a, b, 3);
	printf("%s\n", ptr);

	return 0;
}

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return(dest);
}

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return dest;
}

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
