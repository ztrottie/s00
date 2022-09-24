#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char s1[] = "115";
	char s2[] = "119";
	int		diff1;
	int		diff2;

	diff1 = strcmp(s1, s2);
	printf("%d\n", diff1);
	diff2 = ft_strcmp(s1, s2);
	printf("%d\n", diff2);
}