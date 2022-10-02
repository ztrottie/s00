/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:51:03 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/25 16:50:29 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
