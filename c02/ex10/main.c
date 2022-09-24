#include <stdio.h>
#include <string.h>

char    ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char src[] = "asdfghhjkf";
    char dest[120];

    ft_strlcpy(dest, src, 120);
    printf("%s\n", dest);
    strlcpy(dest, src, 120);
    printf("%s\n", dest);
}