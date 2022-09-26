#include <stdio.h>
#include <string.h>

int	ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char	dest[30] = "123456789";
	char	src[] = "9876543212345235324";

	strncat(dest, src, 30);
	printf("%s\n", dest);
	ft_strncat(dest, src, 30);
	printf("%s\n", dest);
}