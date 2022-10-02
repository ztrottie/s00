/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:24:33 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/26 15:05:32 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str);

int	main()
{
	char	*str = "asdfghjkadfsgxchvbj";
	int	i;

	i = ft_strlen(str);
	printf("%d\n", i);
}