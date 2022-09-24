/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:48:14 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/22 15:44:24 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_not_printable(char c)
{
	if (c < 32 || c == 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*nb_hex;
	unsigned char	c;

	i = 0;
	nb_hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (is_not_printable(str[i]))
		{
			ft_putchar('\\');
			c = (unsigned char) str[i];
			ft_putchar(nb_hex[c / 16]);
			ft_putchar(nb_hex[c % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
