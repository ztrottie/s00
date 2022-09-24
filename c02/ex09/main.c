#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main()
{
    char src[] = "feslfn0afaasf0Easf";

    ft_strcapitalize(src);
    printf("%s\n", src);
}