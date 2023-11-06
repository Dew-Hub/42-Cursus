/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:55:52 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/16 19:15:47 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_baselen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i = i + 1;
	return (i);
}

int	ft_correct(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0' || i == 1)
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		while ((i + 1) < ft_baselen(str))
		{
			if (str[i] == str[i + 1])
				return (0);
			i++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	sign;
	int	base_len;

	i = 0;
	sign = 1;
	base_len = ft_baselen(base);
	if (ft_correct(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr < base_len)
		{
			ft_putchar(base[nbr]);
		}
		if (nbr >= base_len)
		{
			ft_putnbr_base((nbr / base_len), base);
			ft_putnbr_base((nbr % base_len), base);
		}
	}
}
