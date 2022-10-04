/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:57:26 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/04 14:42:15 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc = 0;
	while (*argv[argc])
	{
		write(1, argv[argc], 1);
		argv[argc]++;
	}
	write(1, "\n", 1);
	return (0);
}
