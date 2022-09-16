/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:40:22 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/16 11:27:55 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_negatives(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int	restant;
	int	dig[10];
	int	pos;

	pos = 9;
	restant = 0;
	nb = ft_negatives(nb);
	while (nb > 0)
	{
		restant = nb % 10 + 48;
		dig[pos] = restant;
		pos--;
		nb = nb / 10;
	}
	while (pos <= 9)
	{
		write(1, &dig[pos], 1);
		pos++;
	}
}
