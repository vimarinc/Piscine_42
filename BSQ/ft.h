/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghubault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 01:55:24 by ghubault          #+#    #+#             */
/*   Updated: 2014/09/18 01:55:41 by ghubault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef		FT_H
# define	FT_H	

# define	BUF_SIZE	20

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*strdup(char *str);
char	*ft_mallocat(char *str, char *buf);
int		ft_size_n(char *str);
char	**malloc_return(char **carre);
char	**ft_compare(char **str_old, char **str_new);
char	**find_obstacle_ultimate(char **str, int x, int y);
int		find_obstacle(char **str, int x, int y);
char	**ft_print_x(char **carre, char **str, int x, int y);
char	**tab_x_y(char *str, char **carre);
int		ft_atoi(char *str);
void	ft_putstr_str(char **str);

#endif
