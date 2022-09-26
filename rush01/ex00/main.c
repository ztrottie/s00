/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:08:24 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/25 16:39:41 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_program(char *str);
int		input_error(int argc, char *str);
void	script_error(void);

int	main(int argc, char *argv[])
{
	int	error;
	char *str;

	str = argv[1];
	error = input_error(argc, str);
	if (error == 1)
		set_program(str);
	else
		script_error();
}
