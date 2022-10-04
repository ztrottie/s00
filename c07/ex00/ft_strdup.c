/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:37:06 by ztrottie          #+#    #+#             */
/*   Updated: 2022/10/02 19:09:25 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = (char *)malloc(1 * sizeof(src));
	if (*src != '\0')
	{
		ptr = src;
	}
	return (ptr);
}
