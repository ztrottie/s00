/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:01:46 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/20 20:09:41 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] <= 96 || str[i] >= 123)
				answer = answer * 0;
			i++;
		}
	}
	return (answer);
}
