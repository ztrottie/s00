#include <stdio.h>
#include <string.h>

int	ft_strcat(char *dest, char *src);

int	main()
{
	char	dest[30] = "123456789";
	char	src[] = "9876543212345235324";

	strcat(dest, src);
	printf("%s\n", dest);
	ft_strcat(dest, src);
	printf("%s\n", dest);
}