#include <stdio.h>
#include <string.h>

char    ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    char src[] = "asdfghhjk";
    char dest[120];

    ft_strncpy(dest, src, 5);
    printf("%s\n", dest);
    strncpy(dest, src, 5);
    printf("%s\n", dest);
}