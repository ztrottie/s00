#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char	str[30] = "Hello World";
	char	to_find[] = "lo";
	char	*ptr;

	ptr = strstr(str, to_find);
	printf("%s\n", ptr);
	ptr = ft_strstr(str, to_find);
	printf("%s\n", ptr);
}