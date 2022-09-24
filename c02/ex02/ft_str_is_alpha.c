/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:13:35 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/21 19:54:37 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	rep;

	i = 0;
	rep = 1;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] <= 64 || str[i] >= 123)
				rep = rep * 0;
			else if (str[i] <= 96 && str[i] >= 91)
				rep = rep * 0;
			i++;
		}
	}
	return (rep);
}
