#ifndef _PRINTF_H_
#define _PRINTF_H_


#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_printf(char str[], ...);
void 	ft_int(char str[], int *i, va_list ap);
void	ft_char(char str[], int *i, va_list ap);

#endif