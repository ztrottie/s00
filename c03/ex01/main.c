#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char	s1[] = "123456789";
	char	s2[] = "987654321";
	int		diff;

	diff = strncmp(s1, s2, 5);
	printf("%d\n", diff);
	diff = ft_strncmp(s1, s2, 5);
	printf("%d\n", diff);
}