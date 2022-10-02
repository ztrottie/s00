/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:57:17 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/01 20:52:52 by ztrottie         ###   ########.fr       */
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

long int	is_negative(long int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	return (nb);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			error;
	long int	nb;
	char		str[32];
	int			pos;

	pos = 0;
	error = error_base(base);
	if (error == 0)
	{
		nb = (long int) nbr;
		nb = is_negative(nb);
		while (nb > 0)
		{
			str[pos] = base[nb % ft_strlen(base)];
			nb /= ft_strlen(base);
			pos++;
		}
		pos--;
		while (pos >= 0)
		{
			write(1, &str[pos], 1);
			pos--;
		}
	}
}
