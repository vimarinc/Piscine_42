/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 11:04:23 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/18 11:04:29 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int cpt;

	cpt = 0;
	while (*str != '\0')
	{
		str++;
		cpt++;
	}
	return (cpt);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
