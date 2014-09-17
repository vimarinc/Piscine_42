
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while(str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
