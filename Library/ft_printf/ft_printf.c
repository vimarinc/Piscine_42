#include "printf.h"

void ft_printf(char str[], ...)
{
	int i;
	int *ptri;

	i = 0;
	ptri = &i;
	va_list ap;
	va_start(ap, str);
	while (str[*ptri] != '\0')
	{
		ft_int(str, ptri, ap);
		ft_char(str, ptri, ap);
		
		ft_putchar(str[i]);
		*ptri = *ptri + 1;
	}
	va_end(ap);
}

void	ft_int(char str[], int *i, va_list ap)
{
	if (str[*i] == '%' && str[*i + 1] == 'd')
	{
			ft_putnbr(va_arg(ap, int));
			*i = *i + 2;
	}
}

void	ft_char(char str[], int *i, va_list ap)
{
	if (str[*i] == '%' && str[*i + 1] == 's')
	{
		ft_putstr(va_arg(ap, char*));
		*i = *i + 2;
	}
}
