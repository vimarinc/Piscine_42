/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/08 16:17:48 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/08 17:47:40 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str);
void ft_putchar(char c);
char *ft_strrev(char *str)
{
	int i;

	i = str[0];
	while ('\0' > str [0])
	{
		ft_putchar(str [i]);
		i--;
	}
}

int		main()
{
	char tab [] = "hello";
	*ft_strrev(tab);
	
	ft_putchar(tab);
	return(0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
