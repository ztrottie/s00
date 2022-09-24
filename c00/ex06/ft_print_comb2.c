/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:22:15 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/19 22:55:50 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	digits[5];
	int		a;
	int		b;

	a = 0;
	digits[2] = ' ';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			digits[0] = a / 10 + 48;
			digits[1] = a % 10 + 48;
			digits[3] = b / 10 + 48;
			digits[4] = b % 10 + 48;
			write(1, &digits, 5);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
