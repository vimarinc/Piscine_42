/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_return.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 11:05:05 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/18 11:05:07 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
#include <unistd.h>

void	first_malloc_return(int ret, char *buf, char *str)
{
	buf[ret] = '\0';
	str = ft_mallocat(str, buf);
	buf = (char*)malloc(sizeof((*buf) * 1000));
}

void	two_malloc_return(int i, char *str, char **carre)
{
	carre[i] = (char*)malloc(sizeof(char) * ft_size_n(str));
	i++;
}

char	**malloc_return(char **carre)
{
	int ret;
	char*buf;
	char*str;
	int i;

	i = 0;
	ret = 0;
	buf = (char*)malloc(sizeof(char) * 1000);
	if (buf == NULL)
		return (0);
	str = (char*)malloc(sizeof(char) * 1000);
	if (str == NULL)
		return (0);
	str[0] = '\0';
	while ((ret = read(0, buf, 10)))
	{
		first_malloc_return(ret, buf, str);
	}
	carre = (char**)malloc(sizeof(char*) * (ft_atoi(str)));
	while (i <= ft_strlen(str))
	{
		two_malloc_return(i, str, carre);
	}
	carre = tab_x_y(str, carre);
	ft_putstr("yo");
	return (carre);
}
