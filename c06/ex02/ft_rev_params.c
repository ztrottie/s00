/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:20:07 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/04 14:42:23 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc--;
	while (argc > 0)
	{
		while (*argv[argc])
		{
			write(1, argv[argc], 1);
			argv[argc]++;
		}
		write (1, "\n", 1);
		argc--;
	}
}
