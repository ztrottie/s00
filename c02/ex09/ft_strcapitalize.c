/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:39:20 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/24 01:17:16 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_upp(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (is_low(str[i]))
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (is_low(str[i]) && !is_alpha(str[i - 1]) && !is_num(str[i - 1]))
			str[i] -= 32;
		if (is_upp(str[i]) && (is_alpha(str[i - 1]) || is_num(str[i - 1])))
			str[i] += 32;
		i++;
	}
	return (str);
}
