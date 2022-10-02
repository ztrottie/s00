/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:35:37 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/25 17:05:02 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str);
int	is_num(char c);

void	script_error(void)
{
	write(1, "ERROR", 5);
}

int	input_error(int argc, char *str)
{
	int	error;
	int	len;

	error = 1;
	if (argc > 2)
		error *= 0;
	len = ft_strlen(str);
	if (len != 31)
		error *= 0;
	return (error);
}

int	check_input(char *str)
{
	int	i;
	int error;

	error = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
			error *= 1;
		else if (str[i] < '1' || str[i] > '4')
			error *= 0;
		i++;
	}
	return (error);
}
