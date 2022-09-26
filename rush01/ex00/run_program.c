/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_program.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:56:50 by ztrottie          #+#    #+#             */
/*   Updated: 2022/09/25 19:27:08 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_collup[4];
char	g_colldwn[4];
char	g_rowright[4];
char	g_rowleft[4];
void	var_assign(char *str);
void	ft_space_remover(char *str);
int		check_input(char *str);
void	script_error();

void	set_program(char *str)
{
	int	error;

	error = 1;
	error = check_input(str);
	if (error == 0)
		script_error();
	var_assign(str);
}
