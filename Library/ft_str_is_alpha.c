/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 22:52:58 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/10 23:35:59 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			return (1);
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (1);
		if (str[i] <= 127 && str[i] >= 123)
			return (0);
		if (str[i] <= 64 && str[i] >= 0)
			return (0);
		i++;
	}
	return (1);
}
