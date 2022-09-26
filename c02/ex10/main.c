#include <stdio.h>
#include <string.h>

char    ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char src[] = "asdfghhjkf";
    char dest[120];
    unsigned int i;

    i = ft_strlcpy(dest, src, 0);
    printf("%s\n%d\n", dest, i);
    i = strlcpy(dest, src, 0);
    printf("%s\n%d", dest, i);
}