/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-batt <ale-batt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/11 14:17:49 by ale-batt          #+#    #+#             */
/*   Updated: 2014/07/11 14:29:53 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

int main (int argc, char **argv)
{
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
