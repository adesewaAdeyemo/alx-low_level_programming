#include "main.h"
#include <string.h>


int main(void)
{
	/*char a[98]  = "hello";
	char b[] = "world!";
	char *ptr;

	ptr = _strncpy(a, b, 1);
	printf("%s\n", ptr);
	ptr = _strncpy(a, b, 3);
	printf("%s\n", ptr);*/
	char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");

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
