#include <stdio.h>
#include <string.h>

char    ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char src[] = "bonjour";
    char dest[] = "salut bonjour";
    unsigned int i;

    i = ft_strlcpy(dest, src, 10);
    printf("%s\n%d\n", dest, i);
    i = strlcpy(dest, src, 10);
    printf("%s\n%d", dest, i);
}