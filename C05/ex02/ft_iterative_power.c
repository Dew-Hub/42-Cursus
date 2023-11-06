/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:58:02 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/21 00:20:19 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	nbr = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (0 < power)
	{
		nbr = nb * nbr;
		power--;
	}
	return (nbr);
}
