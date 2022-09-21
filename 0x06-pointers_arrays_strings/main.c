#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src);
int main(void)
{
	char a[98]  = "hello";
	char b[] = "world!";
	char *ptr;

	ptr = _strcat(a, b);
	printf("%s\n", ptr);

	return 0;
}

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return(dest);
}
