/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 19:37:06 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/20 19:43:51 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (s1[i] < s2[j])
			return (-1);
		if (s1[i] > s2[j])
			return (1);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
	}
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	return (0);
}

#include <stdio.h>

int main ()
{

	char s1 [] = "abc";
	char s2 [] = "abco";

	printf("%d", ft_strcmp(s1, s2));

	return (0);
}
