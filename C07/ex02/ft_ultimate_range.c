/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:24:11 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/25 16:48:19 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	c;
	int	*result;
	int	i;

	i = 0;
	c = max - min;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	result = malloc(sizeof(int) * c);
	if (result == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = result;
	while (i < max - min)
	{
		result[i] = min + i;
		i++;
	}
	return (c);
}
