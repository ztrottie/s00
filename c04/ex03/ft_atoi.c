/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:13:22 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/02 15:28:11 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == 'r')
		return (1);
	else if (c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;
	int	i;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] && is_space(str[i]))
	i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	return (nb * sign);
}
