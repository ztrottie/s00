/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:11:05 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/01 20:48:10 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_negative(nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	dig[10];
	int	i;

	i = 0;
	nb = is_negative(nb);
	while (nb > 0)
	{
		dig[i] = (nb % 10) + 48;
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &dig[i], 1);
		i--;
	}
}
