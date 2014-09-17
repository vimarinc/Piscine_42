/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 20:31:51 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/10 14:30:24 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int find;

	i = 0;
	j = 0;
	find = ft_strlen(to_find);
	if (find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (to_find[j] == str[i])
			j++;
		else
			j = 0;
		if (j == find)
			return (str + i - j);
		i++;
	}
	str [i] = '\0';
}

int		ft_strlen (char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
