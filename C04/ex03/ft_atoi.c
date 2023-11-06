/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 02:06:17 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/15 20:26:01 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{		
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	nbr = 0;
	sign = ft_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (sign * nbr);
}
