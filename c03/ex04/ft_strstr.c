/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 06:28:31 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/26 00:58:42 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_i;

int	ft_strlen(char *str)
{
	int	nb_char;

	nb_char = 0;
	while (*str > '\0')
	{
		nb_char++;
		str++;
	}
	return (nb_char);
}

char	*find_string(char *str, char *to_find)
{
	int	l;
	int	i;

	i = 0;
	l = ft_strlen(to_find);
	while (str[g_i] != '\0')
	{
		if (str[g_i] == to_find[i] && i < l)
		{
			
		}
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	g_i = 0;
	find_string(str, to_find);
	return (str);
}