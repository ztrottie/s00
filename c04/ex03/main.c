/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:32:41 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/01 20:52:01 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_atoi(char *str);

int	main()
{
	int	nb;
	nb = ft_atoi("        -++--123ad123");
	printf("%d", nb);
}