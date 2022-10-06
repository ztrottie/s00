/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:52:07 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/05 20:29:49 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlen_master(int size, char **strs)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			len++;
			i++;
		}
		j++;
	}
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		i2;
	int		i3;
	char	*ptr;
	int		total_len;

	total_len = (ft_strlen(sep) * (size - 1) + ft_strlen_master(size, strs));
	ptr = (int *)malloc(sizeof(char) * total_len);
	i = 0 ;
	i2 = 0;
	while (i < size)
	{
		while (*strs[i])
			ptr[i2++] = *strs[i]++;
		i3 = 0;
		while (i3 < strlen(sep))
			ptr[i2++] = sep[i3++];
		i++;
	}
}