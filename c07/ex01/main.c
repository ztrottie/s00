/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:11:12 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/05 17:33:13 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	*ft_range(int min, int max);

int main()
{
	int	min = 0;
	int	max = 2147483647;
	int	i = 0;
	int	*ptr = ft_range(min, max);

	while (min < max)
	{
		printf("%d\n", ptr[i]);
		i++;
		min++;
	}
}