/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 20:14:46 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/10 22:50:48 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-')
		{
			str[i - 1] = str[i - 1] - 32;
			i++;
		}
		if (i = 0 && str[i] > 97 && str[i] < 123)
		{
			str[i] = str[i] - 32;
			i++;
		}
		if (str[i] < '[' && str[i] > '@')
			i++;
		if (str[i] > ']' && str[i - 2] == ' ')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
