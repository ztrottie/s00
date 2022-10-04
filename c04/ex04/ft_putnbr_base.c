/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:57:17 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/02 22:07:32 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	check_char(char *base, int len)
{
	int	i;
	int	i2;

	i = 0;
	while (len > 0)
	{
		i2 = i + 1;
		while (base[i2] != '\0')
		{
			if (base[i] == base[i2])
				return (1);
			i2++;
		}
		i++;
		len--;
	}
	return (0);
}

int	error_base(char	*base)
{
	int	i;
	int	len;
	int	n;

	len = ft_strlen(base);
	if (len < 2)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	n = check_char(base, len);
	return (n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				error;
	unsigned int	nb;

	error = error_base(base);
	if (error == 0)
	{	
		if (nbr < 0)
		{
			nb = nbr * -1;
			ft_putchar('-');
		}
		else
			nb = nbr;
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base((nb / ft_strlen(base)), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
